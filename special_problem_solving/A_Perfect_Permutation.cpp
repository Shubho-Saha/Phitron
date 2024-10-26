#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int> arr(n+1);

    for(int i=1; i<=n; i++) {
        arr[i] = i;
    }

    if (n % 2 == 1) {
        cout<<-1<<endl;
        return 0;
    }

    for(int i=1; i<n; i+=2) {
        swap(arr[i], arr[i+1]);
    }

    for(int i=1; i<=n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}