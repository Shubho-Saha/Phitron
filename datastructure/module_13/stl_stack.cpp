#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> mystack;
    int n;
    cin>>n;
    int x;

    for(int i=0; i<n; i++) {
        cin>>x;
        mystack.push(x);
    }
    cout<<mystack.size()<<endl;
    while(!mystack.empty()) {
        cout<<mystack.top()<<endl;
        mystack.pop();
    }
    cout<<mystack.size()<<endl;

    return 0;
}