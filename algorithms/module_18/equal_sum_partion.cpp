#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int totalSum = 0;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        totalSum += arr[i];
    }

    if (totalSum % 2 != 0) {
        cout<<"NO"<<endl;
    } else {
        int target = totalSum / 2;
        vector<vector<bool>> dp(n+1, vector<bool>(target+1));
        dp[0][0] = true;
        for(int j=1; j<=target; j++) {
            dp[0][j] = false;
        }

        for(int i=1; i<=n; i++) {
            for(int j=0; j<=target; j++) {
                if (arr[i-1] <= j) {
                    dp[i][j] = dp[i-1][j-arr[i-1]] || dp[i-1][j];
                } else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if (dp[n][target]) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}