#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> myst;
    int n, v;
    cin>>n;
    while(n--) {
        cin>>v;
        myst.push(v);
    }

    stack<int> newSt;
    while(!myst.empty()) {
        newSt.push(myst.top());
        myst.pop();
    }

    while(!newSt.empty()) {
        cout<<newSt.top()<<" ";
        newSt.pop();
    }

    return 0;
}