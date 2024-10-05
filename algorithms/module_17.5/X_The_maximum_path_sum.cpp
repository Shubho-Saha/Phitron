#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int n, m;
vector<vector<ll>> dp;

ll maxPathSum(int si, int sj, vector<vector<int>> &mat) {
    if (si == n-1 && sj == m-1) {
        dp[si][sj] = mat[si][sj];
        return dp[si][sj];
    }
    if (dp[si][sj] != LLONG_MIN) {
        return dp[si][sj];
    }
    ll op1 = LLONG_MIN, op2 = LLONG_MIN;
    if (si+1 < n) {
        op1 = maxPathSum(si+1, sj, mat);
    }
    if (sj+1 < m) {
        op2 = maxPathSum(si, sj+1, mat);
    }
    dp[si][sj] = mat[si][sj] + max(op1, op2);
    return dp[si][sj];

}
int main()
{
    
    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int>(m));
    dp = vector<vector<ll>>(n, vector<ll>(m, LLONG_MIN));

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin>>mat[i][j];
        }
    }

    ll ans = maxPathSum(0, 0, mat);
    cout<<ans;

    return 0;
}