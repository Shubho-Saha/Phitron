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

        sort(arr, arr+n);
        cout<<arr[0];
        int tmp = arr[0];
        for(int i=1; i<n; i++) {
            if (arr[i] != tmp) {
                cout<<" "<<arr[i];
                tmp = arr[i];
            }
        }
        cout<<endl;
    }

    return 0;
}