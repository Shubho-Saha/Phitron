#include <bits/stdc++.h>
using namespace std;
vector<int> prefixSum(vector<int> arr) {
    int ln = arr.size();
    vector<int> preSum(ln);
    preSum[0] = arr[0];

    for(int i=1; i<ln; i++) {
        preSum[i] = preSum[i-1] + arr[i];
    }

    return preSum;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cin>>v[i];
    }

    vector<int> v2 = prefixSum(v);

    for(int x:v2) {
        cout<<x<<" ";
    }


    return 0;
}