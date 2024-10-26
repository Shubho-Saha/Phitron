#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> list(n);

    for(int i=0; i<n; i++) {
        cin>>list[i];
    }

    int target;
    cin>>target;

    int idx = -1;
    int l = 0, r = n-1;

    for(int i=0; i<n; i++) {
        if (list[i] == target) {
            idx = i;
            break;
        }
    }
    cout<<idx<<endl;

    // while(l<=r)
    // {
    //     int midIdx = l + (r-l)/2;
    //     if (list[midIdx] > target) {

    //     }
    // }

    return 0;
}