#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];

void dsuInitialize(int n) {
    for(int i=0; i<n; i++) {
        parent[i] = -1;
    }
    parent[0] = 1;
    parent[1] = 3;
    parent[3] = 5;
    parent[4] = 2;
}

int findLeader(int node) {
    if (parent[node] == -1) return node;
    int leader = findLeader(parent[node]);
    parent[node] = leader;
    return leader;
}
int main()
{
    dsuInitialize(6);
    // cout<<findLeader(0)<<endl;
    // cout<<findLeader(1)<<endl;
    // cout<<findLeader(2)<<endl;
    // cout<<findLeader(3)<<endl;
    // cout<<findLeader(4)<<endl;
    // cout<<findLeader(5)<<endl;
    cout<<parent[1]<<endl;
    cout<<parent[0]<<endl;
    cout<<"--------"<<endl;
    findLeader(0);
    cout<<parent[1]<<endl;
    cout<<parent[0]<<endl;

    return 0;
}