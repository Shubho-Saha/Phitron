#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

int n, m;
bool isValid(int i, int j) {
    return (i >= 0 && i< n && j>=0 && j<m);
}
vector<pair<int,int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void DFS(int si, int sj, vector<vector<char>> &grid, vector<vector<bool>> &visited) {
    cout<<si<<sj<<nl;
    visited[si][sj] = true;

    for(int i=0; i<4; i++) {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (isValid(ci, cj) && !visited[ci][cj]) {   
            DFS(ci, cj, grid, visited);
        }
    }
}
int main()
{
    fastIO();
    cin>>n>>m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }

    int si, sj;
    cin>>si>>sj;
    DFS(si, sj, grid, visited);

    return 0;
}