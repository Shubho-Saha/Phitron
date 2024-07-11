#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    vector<int> myst;

    void push(int val) {
        myst.push_back(val);
    }

    void pop() {
        myst.pop_back();
    }

    int top() {
        return myst.back();
    }

    bool empty() {
        if (myst.size() == 0) return true;
        return false;
    }
};


int main()
{
    myStack myst1;
    int n;
    cin>>n;
    int v;
    while(n--) {
        cin>>v;
        myst1.push(v);
    }

    myStack myst2;
    int m, x;
    cin>>m;
    while(m--) {
        cin>>x;
        myst2.push(x);
    }
    
    bool flag = true;
    while (!myst1.empty() && !myst2.empty()) {
        if (myst1.top() != myst2.top()) {
            flag = false;
            break;
        }
        myst1.pop();
        myst2.pop();
    }

    if (myst1.empty() == false || myst2.empty() == false) {
        flag = false;
    }

    if (flag) cout<<"YES";
    else cout<<"NO";

    return 0;
}