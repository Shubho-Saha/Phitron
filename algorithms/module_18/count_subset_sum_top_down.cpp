#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp;

int countSubset(int idx, int sum, vector<int> &arr)
{
    if (idx < 0) {
        if (sum == 0) return 1;
        else return 0;
    }

    if (dp[idx][sum] != -1) {
        return dp[idx][sum];
    }

    if (arr[idx] <= sum) {
        int op1 = countSubset(idx-1, sum-arr[idx], arr);
        int op2 = countSubset(idx-1, sum, arr);

        return dp[idx][sum] = op1 + op2;
    } else {
        return dp[idx][sum] = countSubset(idx-1, sum, arr);
    }
}
int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int sum;
    cin>>sum;
    dp = vector<vector<int>>(n+1, vector<int>(sum+1, -1));

    int ans = countSubset(n-1, sum, arr);
    cout<<ans<<endl;


    return 0;
}