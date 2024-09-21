#include <bits/stdc++.h>
using namespace std;

int wrapper(int x)
{
    if (x < 3)
        return 0;
    return x / 3 + wrapper((x/3) + (x%3));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = n / 5 + wrapper(n / 5);
        cout << ans <<endl;
    }
    return 0;
}