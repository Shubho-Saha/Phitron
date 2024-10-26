#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n - 2);
    ll currentSum = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> arr[i];
        currentSum += arr[i];
    }

    ll mainSum;
    cin >> mainSum;

    ll targetSum = mainSum - currentSum;
    ll x = targetSum;

    if (targetSum < 0)
    {
        cout << 0 << '\n';
        return;
    }

    cout<< targetSum + 1 << '\n';
}
int main()
{
    fast();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}