#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;
bool getMark(int idx, int target, vector<int> &numList)
{
    if (idx < 0)
    {
        if (target == 0)
            return true;
        else
            return false;
    }

    if (dp[idx][target] != -1)
    {
        return dp[idx][target];
    }

    if (numList[idx] <= target)
    {
        bool op1 = getMark(idx - 1, target - numList[idx], numList);
        bool op2 = getMark(idx - 1, target, numList);

        return dp[idx][target] = (op1 || op2);
    }
    else
    {
        return dp[idx][target] = getMark(idx - 1, target, numList);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int target = 1000 - m;

        vector<int> numList(n);
        dp = vector<vector<int>>(n + 1, vector<int>(target + 1, -1));

        for (int i = 0; i < n; i++)
        {
            cin >> numList[i];
        }

        int ans = getMark(n - 1, target, numList);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}