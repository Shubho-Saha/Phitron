#include <bits/stdc++.h>
using namespace std;

int n, m;

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void bfs(int si, int sj, vector<vector<char>> &grid, vector<vector<bool>> &vis, vector<vector<pair<int, int>>> &parent)
{

    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> root = q.front();
        q.pop();

        for (pair<int, int> dir : directions)
        {
            int ci = root.first + dir.first;
            int cj = root.second + dir.second;

            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {root.first, root.second};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, di, dj;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
            vis[i][j] = false;
        }
    }

    bfs(si, sj, grid, vis, parent);

    if (vis[di][dj])
    {
        int xi = di;
        int xj = dj;

        while (true)
        {
            int newXi = parent[xi][xj].first;
            int newXj = parent[xi][xj].second;
            xi = newXi;
            xj = newXj;
            if (grid[xi][xj] == 'R')
                break;
            grid[xi][xj] = 'X';
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}