#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[101][101];
bool vis[101][101];
int dis[101][101];
vector<pair<int, int>> v = {{-2, 1}, {-2, -1}, {2, 1}, {2, -1}, {-1, 2}, {1, 2}, {-1, -2}, {1, -2}};

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
    dis[si][sj] = 0;

    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            int ci, cj;
            ci = parent.first + v[i].first;
            cj = parent.second + v[i].second;
            if (isValid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[parent.first][parent.second] + 1;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj >> qi >> qj;
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(ki, kj);
        cout<<dis[qi][qj]<<endl;
    }

    return 0;
}