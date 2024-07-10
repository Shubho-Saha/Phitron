#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q1;
    int n;
    cin>>n;
    int x;
    while(n--) {
        cin>>x;
        q1.push(x);
    }

    queue<int> q2;
    int m;
    cin>>m;
    int v;
    while(m--) {
        cin>>v;
        q1.push(v);
    }

    queue<int> mergeQ;
    while(!q1.empty()) {
        mergeQ.push(q1.front());
        q1.pop();
    }

    while(!q2.empty()) {
        mergeQ.push(q2.front());
        q2.pop();
    }

    while(!mergeQ.empty()) {
        cout<<mergeQ.front()<<" ";
        mergeQ.pop();
    }

    return 0;
}