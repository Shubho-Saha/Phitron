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

    int x;
    cin>>x;

    int l=0, r=n-1;
    bool flag = false;
    while(l <= r) {
        int mid = (l+r)/2;
        if (x == arr[mid]) {
            if (arr[mid] == arr[mid+1] || arr[mid] == arr[mid-1]) {
                flag = true;
                break;
            }
        } else if (x > arr[mid]) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if (flag) cout<<"true";
    else cout<<"false";

    return 0;
}