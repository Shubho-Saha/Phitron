#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin>>n>>q;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    while (q--) {
        int x;
        cin>>x;
        int flag = 0;
        for(int a:arr) {
           if (a == x) {
                flag = 1;
                break;
           }
        }
        if (flag) cout<<"found\n";
        else cout<<"not found\n";
        
    }

    return 0;
}