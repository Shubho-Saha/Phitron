#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int,int>> adlist[N];
int dis[N];

void dijkstra(int src) {
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;

    while(!q.empty()) 
    {
        pair<int, int> parent = q.front();
        q.pop();
        int nodeValue = parent.first;
        int nodeCost = parent.second;

        for(pair<int, int> child: adlist[nodeValue]) {
            int childNode = child.first;
            int childCost = child.second;

            if (nodeCost + childCost < dis[childNode]) {
                dis[childNode] = nodeCost + childCost;
                q.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    while(e--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        adlist[a].push_back({b, c});
        adlist[b].push_back({a, c});

    }

    for(int i=0; i<n; i++) {
        dis[i] = INT_MAX;
    }
    
    int src;
    cin>>src;
    dijkstra(src);

    for(int i=0; i<n; i++) {
        cout<<i<<" - "<<dis[i]<<endl;
    }

    return 0;
}