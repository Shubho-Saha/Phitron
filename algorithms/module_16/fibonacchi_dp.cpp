#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+10;
long long int dp[N];
long long int fib(int n)
{
    if (n <= 1) return n;
    if (dp[n] != -1) {
        return dp[n];
    }
    long long ans = fib(n-1) + fib(n-2);
    dp[n] = ans;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    memset(dp, -1, sizeof(dp));
    cout<<fib(n);
   

    return 0;
}