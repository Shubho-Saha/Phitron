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

    sort(arr, arr+n);

    bool flag = false;
    for(int i=0; i<n-1; i++) {
        if (arr[i] == arr[i+1]) {
            flag = true;
            break;
        }
    }
    if (flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}