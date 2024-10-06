#include <bits/stdc++.h>
using namespace std;

void adventure()
{
    int n, bw;
    cin >> n >> bw;

    vector<int> weight(n);
    vector<int> profit(n);

    vector<vector<int>> dp(n + 1, vector<int>(bw + 1));
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= bw; j++)
        {
            if (weight[i - 1] <= j)
            {
                int op1 = profit[i - 1] + dp[i - 1][j - weight[i - 1]];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][bw]<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--) {
        adventure();
    }
    return 0;
}