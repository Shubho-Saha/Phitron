#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> myst;
    queue<int> myQ;

    int n, v;
    cin>>n;
    while(n--) {
        cin>>v;
        myst.push(v);
    }

    int m, x;
    cin>>m;
    while(m--) {
        cin>>x;
        myQ.push(x);
    }

    bool flag = true;
    while(!myst.empty() && !myQ.empty()) {
        if (myst.top() != myQ.front()) {
            flag = false;
            break;
        }
        myst.pop();
        myQ.pop();
    }

    if (!myst.empty() || !myQ.empty()) {
        flag = false;
    }

    if (flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}