#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    sort(arr.begin(), arr.end());
    int singleEven = INT_MIN;
    int doubleEven = INT_MIN;
    for(int i=n-1; i>= n-3; i--) {
        if (i < 0) break;
        if (arr[i] % 2 == 0) {
            singleEven = max(singleEven, arr[i]);
        }
    }

    int mx1 = 0, mx2 = 0, mx3 = 0;

    mx1 = arr[n-1];
    n--;
    if (n>0) {
        mx2 = arr[n-1];
    }
    n--;
    if (n >0) {
        mx3 = arr[n-1];
    }

    int one = mx1 + mx2;
    int two = mx1 + mx3;
    int three = mx2 + mx3;

    int doublemax = INT_MIN;
    if (one % 2 == 0) {
        doublemax = max(one, doublemax);
    }
    if (two % 2 == 0) {
        doublemax = max(two, doublemax);
    }

    if (three %2 == 0) {
        doublemax = max(three, doublemax);
    }
    

    cout<<max(singleEven, doublemax);

    return 0;
}