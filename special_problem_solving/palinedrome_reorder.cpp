#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string str;
    cin >> str;

    map<char, int> mp;

    for (auto it : str)
    {
        mp[it]++;
    }

    int oddCnt = 0;

    for (auto [x, y] : mp)
    {
        if (y%2 != 0) {
            oddCnt++;
        }
    }
    if (oddCnt > 1) {
        cout<<"NO SOLUTION"<<'\n';
        return;
    }

    string first, middle, last;

    for(auto [key, val] : mp) {
        if (val % 2 != 0) {
            for(int i=1; i<=val; i++) {
                middle.push_back(key);
            }
        } else {
            for(int i=1; i<= (val/2); i++) {
                first.push_back(key);
                last.push_back(key);
            }
        }
    }
    reverse(last.begin(), last.end());
    cout<<first<<middle<<last<<'\n';
}
int main()
{
    solve();

    return 0;
}