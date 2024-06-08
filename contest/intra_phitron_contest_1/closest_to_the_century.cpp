#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }
        int mn = INT_MAX;

        for(int i=0; i<n; i++) {
            mn = min(mn, (100-arr[i]));
        }

        cout<<100-mn<<endl;
    }

    return 0;
}