#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int>(m));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
        }
    }

    vector<vector<ll>> dp(n, vector<ll>(m, LLONG_MIN));
    dp[0][0] = mat[0][0];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if (i > 0) {
                dp[i][j] = max(dp[i][j], mat[i][j] + dp[i-1][j]);
            }
            if (j > 0) {
                dp[i][j] = max(dp[i][j], mat[i][j] + dp[i][j-1]);
            }
            
        }
    }

    cout<<dp[n-1][m-1];

    return 0;
}