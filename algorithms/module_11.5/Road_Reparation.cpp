#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int level[N];
bool vis[N];

void dsu_initialize(int n)
{
    for(int i=0; i<=n; i++) {
        parent[i] = -1;
        level[i] = 1;
        vis[i] = false;
    }
}

int findLeader(int node) {
    if (parent[node] == -1) return node;
    int leader = findLeader(parent[node]);
    parent[node] = leader;
    return leader;
}

void unionByRank(int nodeA, int nodeB) {
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

void dfs(int src, vector<vector<int>> &adlist) {
    vis[src] = true;

    for(int nodes : adlist[src]) {
        if (!vis[nodes]) {
            dfs(nodes, adlist);
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    vector<Edge> edgelist;
    vector<vector<int>> adlist(n+1, vector<int>());
    long long int totalCost = 0;
    dsu_initialize(n);

    while(e--)
    {
        int u, v, w;
        cin>>u>>v>>w;
        adlist[u].push_back(v);
        adlist[v].push_back(u);
        edgelist.push_back(Edge(u,v,w));

    }

    sort(edgelist.begin(), edgelist.end(), cmp);
    int component = 0;

    for(int i=1; i<=n; i++) {
        if (vis[i] == false) {
            dfs(i, adlist);
            component++;
        }
    }

    if (component > 1) {
        cout<<"IMPOSSIBLE"<<endl;
        return 0;
    }

    for(Edge ed : edgelist) {
        int leaderU = findLeader(ed.u);
        int leaderV = findLeader(ed.v);

        if (leaderU == leaderV) {
            continue;
        } else {
            unionByRank(ed.u, ed.v);
            totalCost += ed.w;
        }

    }

    cout<<totalCost<<endl;

    return 0;
}