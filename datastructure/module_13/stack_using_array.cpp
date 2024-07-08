#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    vector<int> vec;

    void push(int val) {
        vec.push_back(val);
    }

    void pop() {
        vec.pop_back();
    }

    int top() {
        return vec.back();
    }

    int size() {
        return vec.size();
    }

    bool empty() {
        if (vec.size() == 0) return true;
        return false;
    }

};


int main()
{
    
    myStack ms;
    int n, x;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>x;
        ms.push(x);
    }

    while(!ms.empty()) {
        cout<<ms.top()<<endl;
        ms.pop();
    }
    return 0;
}