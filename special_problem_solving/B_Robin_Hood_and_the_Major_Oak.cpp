#include <bits/stdc++.h>
#define ll long long int
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    bool flag = false;

    if (n % 2 == 0)
    {
        int oddCount = k / 2;
        if (oddCount % 2 == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    else
    {
        int oddCount = ceil(1.0* k/2);
        if (oddCount % 2 == 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
}
int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}