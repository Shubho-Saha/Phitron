#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> dir = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValid(int i, int j, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj, vector<vector<char>> &grid, vector<vector<bool>> &vis, vector<vector<pair<int, int>>> &parent)
{
    vis[si][sj] = true;
    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        pair<int, int> current = q.front();
        q.pop();
        int crrnti = current.first;
        int crrntj = current.second;
        for (pair<int, int> d : dir)
        {
            int childi = crrnti + d.first;
            int childj = crrntj + d.second;

            if (isValid(childi, childj, grid.size(), grid[0].size()) && !vis[childi][childj] && grid[childi][childj] != '#')
            {
                q.push({childi, childj});
                parent[childi][childj] = {crrnti, crrntj};
                vis[childi][childj] = true;
            }
        }
    }
}

// void dfs(int si, int sj, vector<vector<char>> &grid, vector<vector<bool>> &vis, vector<vector<pair<int, int>>> &parent)
// {
//     vis[si][sj] = true;

//     for (pair<int, int> p : dir)
//     {
//         int ci = si + p.first;
//         int cj = sj + p.second;

//         if (isValid(ci, cj, grid.size(), grid[0].size()) && !vis[ci][cj] && grid[ci][cj] != '#')
//         {
//             parent[ci][cj] = {si, sj};
//             dfs(ci, cj, grid, vis, parent);
//         }
//     }
// }

void labyrinth()
{
    int n, m;
    cin >> n >> m;
    int si = -1, sj = -1, di = -1, dj = -1;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                si = i;
                sj = j;
            }
            else if (grid[i][j] == 'B')
            {
                di = i;
                dj = j;
            }
        }
    }

    if (si == -1 || sj == -1 || di == -1 || dj == -1)
    {
        cout << "NO" << endl;
        return;
    }

    bfs(si, sj, grid, vis, parent);

    stack<char> path;
    int dis = 0;
    int xi = di;
    int xj = dj;

    while (di != -1 && dj != -1)
    {
        if (di == si && dj == sj)
        {
            break;
        }

        if (dj == parent[di][dj].second)
        {
            if (di < parent[di][dj].first)
            {
                path.push('U');
            }
            else
            {
                path.push('D');
            }
        }
        else if (di == parent[di][dj].first)
        {
            if (dj > parent[di][dj].second)
            {
                path.push('R');
            }
            else
            {
                path.push('L');
            }
        }

        int ai = parent[di][dj].first;
        int bi = parent[di][dj].second;
        di = ai;
        dj = bi;
        dis++;
    }

    if (vis[xi][xj])
    {
        cout << "YES" << endl;
        cout << dis << endl;
        while (!path.empty())
        {
            cout << path.top();
            path.pop();
        }
        cout<<endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int main()
{
    labyrinth();

    return 0;
}