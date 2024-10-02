#include <bits/stdc++.h>
using namespace std;

int n, m;

bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

vector<pair<int,int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

void dfs(int si, int sj, int &count, vector<vector<char>> &grid, vector<vector<bool>> &vis) {
    vis[si][sj] = true;
    count++;

    for(pair<int, int> dir : directions) {
        int ci = si + dir.first;
        int cj = sj + dir.second;

        if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.') {
            dfs(ci, cj, count, grid, vis);
        }
    }

}

int main()
{
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            vis[i][j] = false;
        }
    }

    int minArea = INT_MAX;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (vis[i][j] == false && grid[i][j] == '.') {
                int count = 0;
                dfs(i, j, count, grid, vis);
                minArea = min(minArea, count);
            }
        }
    }

    if (minArea == INT_MAX) cout<<-1;
    else cout<<minArea;

    return 0;
}