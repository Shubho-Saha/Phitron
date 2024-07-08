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


int main()
{
    myStack ms;
    int n, v;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>v;
        ms.push(v);
    }

    cout<<"size: "<<ms.size()<<endl;
    while(!ms.empty()) {
        cout<<ms.top()<<endl;
        ms.pop();
    }
    cout<<"size: "<<ms.size()<<endl;

    return 0;
}