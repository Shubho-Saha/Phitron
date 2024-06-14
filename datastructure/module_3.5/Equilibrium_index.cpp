#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    int preSum[n];
    preSum[0] = arr[0];
    for(int i=1; i<n; i++) {
        preSum[i] = preSum[i-1] + arr[i];
    }

    int idx;
    for(int i=1; i<n-1; i++) {
        if (preSum[i-1] == preSum[n-1] - preSum[i]) {
            idx = i;
            break;
        }
    }

    if (idx > 0) cout<<idx;
    else cout<<-1;

    return 0;
}