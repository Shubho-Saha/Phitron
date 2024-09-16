#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adlist[N];
bool vis[N];
int parentArray[N];
bool isCycle;

void dfs(int src)
{
    cout<<src<<" -> "<<parentArray[src]<<endl;
    vis[src] = true;

    for(int child : adlist[src]) {
        if (vis[child] && parentArray[src] != child) {
            isCycle = true;
        }
        if (!vis[child]) {
            parentArray[child] = src;
            dfs(child);
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    while(e--)
    {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    isCycle = false;

    for(int i=0; i<n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }

    cout<<"-----------"<<endl;
    if (isCycle) cout<<"Cycle Found"<<endl;
    else cout<<"Cyle not found"<<endl;

    return 0;
}