#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class cmpClass {
    public:
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    }
};

void dijkstra(int src, vector<vector<pair<int,int>>> &adlist, vector<int> &dis, vector<int> &parent )
{
    priority_queue< pair<int,int>, vector<pair<int,int>>, cmpClass> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while(!pq.empty())
    {
        pair<int,int> current = pq.top();
        pq.pop();
        int crntNode = current.first;
        int crntCost = current.second;

        for(pair<int, int> childPair : adlist[crntNode]) {
            int childNode = childPair.first;
            int childCost = childPair.second;

            if(crntCost + childCost < dis[childNode]) {
                dis[childNode] = crntCost + childCost;
                pq.push({childNode, crntCost+childCost});
                parent[childNode] = crntNode;
            }
        }
    }

}
int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;

    vector<vector<pair<int,int>>> adlist(n+1, vector<pair<int,int>>());
    while(e--)
    {
        int a, b, w;
        cin>>a>>b>>w;
        adlist[a].push_back({b, w});
        adlist[b].push_back({a, w});
    }

    vector<int> dis(n+1, INT_MAX);
    vector<int> parent(n+1, -1);

    dijkstra(1, adlist, dis, parent);
    for(int i=1; i<=n; i++) {
        cout<<i<<"-> "<<dis[i]<<nl;
    }
    cout<<nl;
    
    vector<int> path;
    int des = 5;
    while(des != -1)
    {
        path.push_back(des);
        des = parent[des];
    }
    reverse(all(path));
    for(auto x : path) {
        cout<<x<<" ";
    }

    return 0;
}