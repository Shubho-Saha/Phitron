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
        bool flag = false;
        for(int i=0; i<n-1; i++) {
            if (arr[i] > arr[i+1]) {
                flag = true;
                break;
            }
        }
        if (flag ) cout<<"NO\n";
        else cout<<"YES\n";
    }

    return 0;
}