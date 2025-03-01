#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool isCycle;

void DFS(int src, vector<vector<int>> &adlist, vector<bool> &vis, vector<bool> &path)
{
    vis[src] = true;
    path[src] = true;

    for(auto child : adlist[src]) {
        if (!vis[child]) {
            DFS(child, adlist, vis, path);
        } else {
            if (path[child]) {
                isCycle = true;
            }
        }
    }
    path[src] = false;
}
int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;

    vector<vector<int>> adlist(n+1, vector<int>());
    vector<bool> vis(n+1, false), path(n+1, false);

    for(int i=1; i<=e; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
    }

    isCycle = false;
    for(int i=1; i<=n; i++) {
        if (!vis[i]) {
            DFS(i, adlist, vis, path);
        }
    }

    if (isCycle) {
        cout<<"Cycle Found"<<nl;
    } else {
        cout<<"Cycle not found"<<nl;
    }

    return 0;
}