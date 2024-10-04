#include <bits/stdc++.h>
using namespace std;

const int N = 1000;
int dp[N][N];

int knapsack(int n, int bw, vector<int> weight, vector<int> profit)
{
    if (n < 0 || bw == 0)
        return 0;

    if (dp[n][bw] != -1)
        return dp[n][bw];

    int op1 = 0;
    int op2 = 0;

    if (weight[n] <= bw)
        op1 = profit[n] + knapsack(n - 1, bw - weight[n], weight, profit);

    op2 = knapsack(n - 1, bw, weight, profit);

    return dp[n][bw] = max(op1, op2);
}
int main()
{
    int n;
    cin >> n;
    vector<int> weight(n);
    vector<int> profit(n);

    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> profit[i];
    }

    int BW;
    cin >> BW;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= BW; j++)
        {
            dp[i][j] = -1;
        }
    }

    int ans = knapsack(n - 1, BW, weight, profit);
    cout << ans << endl;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= BW; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}