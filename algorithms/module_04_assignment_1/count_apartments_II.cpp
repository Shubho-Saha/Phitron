#include <bits/stdc++.h>
using namespace std;

int n,m;
int appCount;
const int N = 1e3+5;
char grid[N][N];
bool vis[N][N];

vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void dfs(int si, int sj, int &cnt) {
    vis[si][sj] = true;
    cnt++;

    for(int i=0; i<4; i++) {
        int ci, cj;
        ci = si + v[i].first;
        cj = sj + v[i].second;

        if (isValid(ci, cj) && vis[ci][cj]==false && grid[ci][cj] != '#' ) {
            dfs(ci, cj, cnt);
        }
    }

}
int main()
{
    vector<int> apartmentCount;
    cin>>n>>m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>grid[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (grid[i][j] == '.' && vis[i][j] == false) {
                appCount = 0;
                dfs(i, j, appCount);
                apartmentCount.push_back(appCount);
            }
            
        }
    }

    if (apartmentCount.empty()) {
        cout<<"0"<<endl;
    } else {
        sort(apartmentCount.begin(), apartmentCount.end());
        for(int x:apartmentCount) {
            cout<<x<<" ";
        }
    }
    

    

    

    return 0;
}