#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isCycle;

void DFS(int src, vector<vector<int>> &adlist, vector<int> &vis, vector<int> &parent )
{
    vis[src] = true;
    cout<<src<<" ";

    for(auto child : adlist[src]) {
        if (!vis[child]) {
            parent[child] = src;
            DFS(child, adlist, vis, parent);
        } else {
            if (child != parent[src]) {
                isCycle = true;
            }
        }
    }
}

int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;

    vector<vector<int>> adlist(n+1, vector<int>());
    vector<int> vis(n+1, false), parent(n+1, -1);
    for(int i=1; i<=e; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    isCycle = false;
    for(int i=1; i<=n; i++) {
        if (!vis[i]) {
            DFS(i, adlist, vis, parent);
        }
    }
    cout<<nl;

    if (isCycle) {
        cout<<"Cycle Found"<<nl;
    } else {
        cout<<"Cycle not Found"<<nl;
    }

    return 0;
}