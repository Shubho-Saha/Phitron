#include <bits/stdc++.h>
using namespace std;

vector<int> dp;
bool makeIt(int currentNum, int targetNum)
{
    if (currentNum == targetNum)
        return true;
    if (currentNum > targetNum)
        return false;

    if (dp[currentNum] != -1) {
        return dp[currentNum];
    }

    bool op1 = makeIt(currentNum + 3, targetNum);
    bool op2 = makeIt(currentNum * 2, targetNum);

    return dp[currentNum] = op1 || op2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        dp = vector<int>(n+1, -1);

        bool ans = makeIt(1, n);
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}