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

    for(int i=n-1; i>=0; i--) {
        int mxidx = i;
        for(int j=0; j<=i; j++) {
            if (arr[j] > arr[mxidx]) {
                mxidx = j;
            }
        }
        swap(arr[i], arr[mxidx]);
        
    }

    for(int i=0; i<n; i++) {
        cout<<arr[i] << " ";
    }


    return 0;
}