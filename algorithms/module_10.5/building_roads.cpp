#include <bits/stdc++.h>
using namespace std;

void dfs(int src, vector<vector<int>> &adlist, vector<bool> &vis) 
{
    vis[src] = true;

    for(int x : adlist[src]) {
        if (vis[x] == false) {
            dfs(x, adlist, vis);
        }
    }
}
int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> adlist(n+1, vector<int>());
    vector<int> components;
    vector<bool> vis(n+1, false);

    while(m--)
    {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    for(int i=1; i<=n; i++) {
        if (vis[i] == false) {
            components.push_back(i);
            dfs(i, adlist, vis);
        }
    }

    cout<<components.size()-1<<endl;

    for(int i=0; i<components.size()-1; i++) {
        cout<<components[i]<<" "<<components[i+1]<<endl;
    }

    

    return 0;
}