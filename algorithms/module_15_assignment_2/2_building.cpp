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

class Edge
{
    public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int main()
{
    int n, e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edlist;
    long long int cost=0;

    bool component = false;

    while(e--)
    {
        int u, v, w;
        cin>>u>>v>>w;
        edlist.push_back(Edge(u,v,w));
    }

    sort(edlist.begin(), edlist.end(), cmp);

    for(Edge ed : edlist) {
        int leaderU = findLeader(ed.u);
        int leaderV = findLeader(ed.v);

        if (leaderU != leaderV) {
            cost += ed.w;
            unionByRank(ed.u, ed.v);
        }
    }

    int leader1 = findLeader(1);
    for(int i=2; i<=n; i++) {
        int leaderI = findLeader(i);
        if (leader1 != leaderI) {
            component = true;
            break;
        }
    }
    if (component) cout<<-1;
    else cout<<cost;

    return 0;
}