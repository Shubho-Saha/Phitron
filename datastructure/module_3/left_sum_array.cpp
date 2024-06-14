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

    int lsum[n];
    lsum[0] = 0;
    for(int i=1; i<n; i++) {
        lsum[i] = lsum[i-1] + arr[i-1];
    }

    for(int x:lsum) {
        cout<<x<<" ";
    }

    return 0;
}