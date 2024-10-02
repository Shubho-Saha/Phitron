#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int parent[N];
int level[N];

void dsu_initialize(int n)
{
    for(int i=1; i<=n; i++) {
        parent[i] = -1;
        level[i] = 0;
    }
}

int findLeader(int node) {
    if (parent[node] == -1) return node;
    int leader = findLeader(parent[node]);
    parent[node] = leader;
    return leader;
}

void unionByRank(int nodeA, int nodeB)
{
    int leaderA = findLeader(nodeA);
    int leaderB = findLeader(nodeB);

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
    int n, e;
    cin>>n>>e;
    dsu_initialize(n);
    int count=0;

    while(e--)
    {
        int a, b;
        cin>>a>>b;

        int leaderA = findLeader(a);
        int leaderB = findLeader(b);

        if (leaderA == leaderB) {
            count++;
        } else {
            unionByRank(a, b);
        }
    }
    cout<<count;

    return 0;
}