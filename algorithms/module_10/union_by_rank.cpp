#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int level[N];
void dsu_initialize(int n) {
    for(int i=0; i<n; i++) {
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

void UnionByRank(int node1, int node2) {
    int leaderA = findLeader(node1);
    int leaderB = findLeader(node2);

    if (level[leaderA] > level[leaderB]) {
        parent[leaderB] = leaderA;
    } else if (level[leaderA] < level[leaderB] ) {
        parent[leaderA] = leaderB;
    } else {
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
    

}
int main()
{
    dsu_initialize(7);
    UnionByRank(1, 2);
    UnionByRank(2, 3);

    UnionByRank(4, 5);
    UnionByRank(5, 6);

    UnionByRank(1, 6);

    for(int i=1; i<=6; i++) {
        cout<<i<<" level: "<<level[i]<<" parent: "<<parent[i]<<endl;
    }

    return 0;
}