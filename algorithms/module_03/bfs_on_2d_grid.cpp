#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[20][20];
bool vis[20][20];
int dis[20][20];
vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j) {
    if (i<0 || i>=n || j<0 || j>= m) return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;

    while(!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        cout<<parent.first<<" "<<parent.second<<endl;
        for(int i=0; i<4; i++) {
            int ci, cj;
            ci = parent.first + v[i].first;
            cj = parent.second + v[i].second;
            if (isValid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[parent.first][parent.second] + 1;
            }
        }

    }
}

int main()
{
    
    cin>>n>>m;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    int si, sj;
    cin>>si>>sj;
    bfs(si, sj);
    cout<<"---------"<<endl;
    cout<<dis[2][3]<<endl;

    

    return 0;
}