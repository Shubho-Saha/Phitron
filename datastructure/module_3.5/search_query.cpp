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

    int q;
    cin>>q;

    while (q--) {
        int x;
        cin>>x;
        int l=0, r=n-1;
        bool flag = false;

        while (l <= r) {
            int mid = (l+r)/2;

            if (arr[mid] == x) {
                flag = true;
                break;
            } else if (x > arr[mid]) {
                l = mid + 1;
            } else {
                r = mid -1;
            }

        }

        if (flag ) cout<<"YES\n";
        else cout<<"NO\n";
    }

    return 0;
}