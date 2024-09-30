#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int level[N];

void dsu_initialize(int n) {
    for(int i=0; i<=n; i++) {
        parent[i] = -1;
        level[i] = 1;
    }
}

int findLeader(int node)
{
    if (parent[node] == -1) return node;

    int leader = findLeader(parent[node]);
    parent[node] = leader;
    return leader;
}

void unionByRank(int node1, int node2)
{
    int leaderA = findLeader(node1);
    int leaderB = findLeader(node2);

    if (level[leaderA] > level[leaderB]) {
        parent[leaderB] = leaderA;
    } else if (level[leaderB] > level[leaderA]) {
        parent[leaderA] = leaderB;
    } else {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}
int main()
{
    int n, m;
    cin>>n>>m;
    dsu_initialize(n);
    bool isCycle = false;

    while(m--)
    {
        int a, b;
        cin>>a>>b;

        int leaderA = findLeader(a);
        int leaderB = findLeader(b);

        if (leaderA == leaderB) {
            isCycle = true;
        } else {
            unionByRank(a, b);
        }

    }

    if (isCycle) cout<<"Cycle found"<<endl;
    else cout<<"Cycle not found"<<endl;

    return 0;
}