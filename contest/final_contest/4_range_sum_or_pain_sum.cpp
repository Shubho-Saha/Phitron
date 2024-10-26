#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long int
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;

    vector<ll> arr;

    for (int i = 1; i <= n / 2; i++)
    {
        arr.push_back(i);
        arr.push_back(i);
    }

    vector<ll> presum(n);
    presum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        presum[i] = presum[i - 1] + arr[i];
    }
    // cout<<"check"<<endl;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        if (l == 0)
        {
            cout << presum[r] << '\n';
        }
        else
        {
            cout << presum[r] - presum[l - 1] << '\n';
        }
        // cout<<presum[r]<<" "<<presum[l-1]<<endl;
    }

  
}
int main()
{
    fast();
    solve();

    return 0;
}