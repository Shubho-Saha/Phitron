#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int parent[N];
int level[N];
bool vis[N];

void dsu_initialize(int n){
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

void dfs(int src, vector<vector<int>> &adjlist) {
    vis[src] = true;

    for(int x : adjlist[src]) {
        if (vis[x] == false) {
            dfs(x, adjlist);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    dsu_initialize(n);

    vector<vector<int>> adjlist(n+1, vector<int>());
    queue<pair<int,int>> closeRoads;

    int edge = n-1;

    while(edge--)
    {
        int a, b;
        cin>>a>>b;
        adjlist[a].push_back(b);
        adjlist[b].push_back(a);

        int leaderA = findLeader(a);
        int leaderB = findLeader(b);

        if (leaderA == leaderB) {
            closeRoads.push({a,b});
        } else {
            unionByRank(a, b);
        }
    }

    queue<int> components;
    for(int i=1; i<=n; i++) {
        if (vis[i] == false) {
            components.push(i);
            dfs(i, adjlist);
        }
    }

    cout<<closeRoads.size()<<endl;
    // while(!components.empty()) {
    //     cout<<components.front()<<" ";
    //     components.pop();
    // }
    int t = closeRoads.size();
    while(t--) 
    {
        pair<int,int> cd = closeRoads.front();
        closeRoads.pop();
        int a = components.front();
        components.pop();
        int b = components.front();
        // components.pop();

        cout<<cd.first<<" "<<cd.second<<" "<<a<<" "<<b<<endl;
    }
    

    return 0;
}