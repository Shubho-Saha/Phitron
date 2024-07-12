#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int> ml;

    void push(int val) {
        ml.push_back(val);
    }

    void pop() {
        ml.pop_back();
    }

    int top() {
        return ml.back();
    }

    int size() {
        return ml.size();
    }

    bool empty() {
        if (ml.size() == 0) return true;
        return false;
    }
};

class myQueue
{
    public:
    list<int> mylist;

    void push(int x) {
        mylist.push_back(x);
    }

    void pop() {
        mylist.pop_front();
    }

    int front() {
        return mylist.front();
    }

    bool empty() {
        if (mylist.size() == 0) return true;
        return false;
    }
};


int main()
{
    int n, m;
    cin>>n>>m;

    myStack myst;
    int x;
    while(n--) {
        cin>>x;
        myst.push(x);
    }

    myQueue myQ;
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