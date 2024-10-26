#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum;
    cin >> sum;

    vector<vector<bool>> dp(n + 1, vector<bool>(sum + 1));
    dp[0][0] = true;
    for (int j = 1; j <= sum; j++)
    {
        dp[0][j] = false;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (arr[i - 1] <= j)
            {
                bool op1 = dp[i - 1][j - arr[i - 1]];
                bool op2 = dp[i - 1][j];

                dp[i][j] = op1 || op2;
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=sum; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    if (dp[n][sum]) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
    return 0;
}