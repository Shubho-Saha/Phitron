#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
    string str1, str2;
    while (cin >> str1 >> str2) {
        int idx1 = 0, idx2 = 0;
        while (idx1 < str1.length() and idx2 < str2.length()) {
            if (str1[idx1] == str2[idx2]) {
                idx2++;
            }
            idx1++;
        }
        if (idx2 == str2.length()) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
}
int main()
{
    fast();
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}