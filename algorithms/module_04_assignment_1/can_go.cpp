#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
int n, m;
char grid[N][N];
bool vis[N][N];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci, cj;
            ci = parent.first + v[i].first;
            cj = parent.second + v[i].second;
            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] != '#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main()
{

    cin >> n >> m;

    int ai, aj, bi, bj;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 'A')
            {
                ai = i;
                aj = j;
            }
            if (grid[i][j] == 'B')
            {
                bi = i;
                bj = j;
            }
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(ai, aj);

    if (vis[bi][bj])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}