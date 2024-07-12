#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;

    stack<int> myst;
    int x;
    while(n--) {
        cin>>x;
        myst.push(x);
    }

    queue<int> myQ;
    int v;
    while(m--) {
        cin>>v;
        myQ.push(v);
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
    if(!myst.empty() || !myQ.empty()) {
        flag = false;
    }
    if (flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}