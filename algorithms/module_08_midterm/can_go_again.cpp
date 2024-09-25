#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Edge
{
    public: 
    ll u, v, c;
    Edge(ll u, ll v, ll c) {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main()
{
    ll n, e;
    cin >> n >> e;
    
    vector<Edge> edgeList;
    ll dis[n+1];
    while (e--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        edgeList.push_back(Edge(a, b, c));
    }

    for(int i=0; i<=n; i++) {
        dis[i] = LLONG_MAX;
    }
    
    int src;
    cin>>src;
    dis[src] = 0;

    for(int i=1; i<= n-1; i++) {
        for(Edge ed : edgeList) {
            ll u = ed.u;
            ll v = ed.v;
            ll c = ed.c;
            if (dis[u] < LLONG_MAX && dis[u]+c < dis[v]) {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;
    for (Edge ed : edgeList)
    {
        ll u = ed.u;
        ll v = ed.v;
        ll c = ed.c;
        if (dis[u] < LLONG_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    int t;
    cin>>t;
    while(t--) {
        int d;
        cin>>d;
        if (cycle) {
            cout<<"Negative Cycle Detected";
            break;
        } else {
            if (dis[d] == LLONG_MAX) {
                cout<<"Not Possible"<<'\n';
            } else {
                cout<<dis[d]<<'\n';
            }
        }
    }

    return 0;
}