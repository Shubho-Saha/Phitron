#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    long long int preSum[n];
    preSum[0] = arr[0];

    for(int i=1; i<n; i++) {
        preSum[i] = arr[i] + preSum[i-1];
    }

    while(q--) {
        int l, r;
        cin>>l>>r;
        l--;
        r--;
        long long int sum;
        if (l==0) sum = preSum[r];
        else sum = preSum[r] - preSum[l-1];

        cout<<sum<<endl;

    }


    return 0;
}