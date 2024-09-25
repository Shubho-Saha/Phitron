#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
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
            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.')
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    bfs(si, sj);
    if (vis[di][dj]) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}