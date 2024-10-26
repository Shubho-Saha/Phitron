#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve()
{
    int n, k;
    cin>>n>>k;

    string s1, s2;
    cin>>s1>>s2;
    for(int i=0; i<n; i++) 
    {
        if (s1[i] != s2[i]) k--;
    }
    if (k>=0) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}