#include <bits/stdc++.h>
using namespace std;

int n, m;
char grid[20][20];
bool vis[20][20];
vector<pair<int, int>> v = {{0,1}, {0, -1}, {-1, 0}, {1, 0}};
bool isValid(int i, int j)
{
    if (i <0 || i>=n || j<0 || j>=m) return false;
    return true;
}

void dfs(int si, int sj)
{
    cout<<si<<" "<<sj<<endl;
    vis[si][sj] = true;

    for(int i=0; i<4; i++) {
        int ci, cj;
        ci = si + v[i].first;
        cj = sj + v[i].second;
        if (isValid(ci, cj) == true && vis[ci][cj] == false) {
            dfs(ci, cj);
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

    int si, sj;
    cin>>si>>sj;

    memset(vis, false, sizeof(vis));
    dfs(si, sj);

    return 0;
}