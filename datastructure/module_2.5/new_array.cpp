#include <bits/stdc++.h>
using namespace std;

void print(int *a, int *b, int n ) {
    int c[n+n];
    for(int i=0; i<n; i++) {
        c[i] = b[i];
    }
    for(int i=n; i<n+n; i++) {
        c[i] = a[i-n];
    }

    for(int x:c) {
        cout<<x<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    for(int i=0; i<n; i++) {
        cin>>b[i];
    }

    print(a, b, n);

    return 0;
}