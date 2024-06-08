#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, t;
    cin>>x>>y>>t;
    bool flag = false;
    int xIdx = t / x;

    for(int i=0; i<=xIdx; i++) {
        if ((t - (x*i))%y == 0) {
            flag = true;
            break;
        }
    }

    if (flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}