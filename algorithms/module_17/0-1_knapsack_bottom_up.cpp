#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> weight(n);
    vector<int> profit(n);

    

    for(int i=0; i<n; i++) {
        cin>>weight[i];
    }
    for(int i=0; i<n; i++) {
        cin>>profit[i];
    }

    int bw;
    cin>>bw;

    vector<vector<int>> dp(n+1, vector<int>(bw+1, 0));

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=bw; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=bw; j++) {
            int op1 = 0;
            int op2 = 0;
            if (weight[i-1] <= j) {
                op1 = profit[i-1] + dp[i-1][j-weight[i-1]];
            }
            op2 = dp[i-1][j];

            dp[i][j] = max(op1, op2);
        }
    }

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=bw; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    

    return 0;
}