#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subsetSum(int idx, int sum, vector<int> &arr) {

    if (idx < 0) {
        if (sum == 0) return true;
        else return false;
    }

    if (dp[idx][sum] != -1) {
        return dp[idx][sum];
    }

    if (arr[idx] <= sum) {
        bool op1 = subsetSum(idx-1, sum-arr[idx], arr);
        bool op2 = subsetSum(idx-1, sum, arr);

        return dp[idx][sum] = op1 || op2;
    } else {
        return dp[idx][sum]= subsetSum(idx-1, sum, arr);
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
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=sum; j++) {
            dp[i][j] = -1;
        }
    }

    if (subsetSum(n-1, sum, arr)) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }

    for(int i=0; i<=n; i++) {
        for(int j=0; j<=sum; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}