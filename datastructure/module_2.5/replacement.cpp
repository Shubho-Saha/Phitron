#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    // for(int i=0; i<n; i++) {
    //     if (v[i] > 0) {
    //         v[i] = 1;
    //     } else if (v[i] < 0) {
    //         v[i] = 2;
    //     }
    // }

    for(auto it=v.begin(); it<v.end(); it++) {
        if (*it > 0) {
            *it = 1;
        } else if (*it < 0) {
            *it = 2;
        }
    }

    for(int x:v) {
        cout<<x<<" ";
    }

    return 0;
}