#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> mainQ;
    int n, v;
    cin>>n;
    while(n--) {
        cin>>v;
        mainQ.push(v);
    }

    stack<int> myst;
    while(!mainQ.empty()) {
        myst.push(mainQ.front());
        mainQ.pop();
    }

    queue<int> newQ;
    while(!myst.empty()) {
        newQ.push(myst.top());
        myst.pop();
    }

    while(!newQ.empty()) {
        cout<<newQ.front()<<" ";
        newQ.pop();
    }

    return 0;
}