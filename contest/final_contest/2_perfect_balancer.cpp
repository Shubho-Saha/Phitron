#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long int
using namespace std;
int main()
{
    fast();
    ll n; 
    cin>>n;
    vector<ll> arr(n);

    for(ll i=0; i<n; i++) {
        cin>>arr[i];
    }

    vector<ll> presum(n);
    presum[0] = arr[0];

    for(int i=1; i<n; i++) {
        presum[i] = presum[i-1] + arr[i];
    }

    bool flag = false;
    ll energy;
    ll idx;

    if (presum[0] == presum[n-1]) {
        energy = presum[0];
        idx = 0;
        flag = true;
    }

    for(int i=0; i<n-1; i++) {
        if (i==0) {
            if (presum[i] == presum[n-1]) {
                energy = presum[i];
                idx = i;
                flag = true;
                break;
            }
        }
        if (presum[i] == (presum[n-1] - presum[i-1])) {
            energy = presum[i];
            idx = i;
            flag = true;
            break;
        }
    }

    if (!flag) {
        if (presum[n-1] == 0) {
            energy = presum[n-1];
            idx = n-1;
            flag = true;
        }
    }

    if (flag) cout<<energy<<" "<<idx+1;
    else cout<<"UNSTABLE";

    // for(int i=0; i<n; i++) {
    //     cout<<presum[i]<<" ";
    // }


    return 0;
}