#include <bits/stdc++.h>
using namespace std;

class Edge
{
    public: 
    int u, v, c;
    Edge(int u, int v, int c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    int n, e;
    cin >> n >> e;
    
    vector<Edge> edgeList;
    int dis[n];
    while (e--)
    {
        int a, b, c;
        cin>>a>>b>>c;
        edgeList.push_back(Edge(a, b, c));
    }

    for(int i=0; i<n; i++) {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    for(int i=1; i<= n-1; i++) {
        for(Edge ed : edgeList) {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;
            if (dis[u] < INT_MAX && dis[u]+c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout<<i<<" -> "<<dis[i]<<endl;
    }

    return 0;
}