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

    for(int i=n-1; i>=0; i--) {
        cout<<preSum[i]<<" ";
    }

    return 0;
}