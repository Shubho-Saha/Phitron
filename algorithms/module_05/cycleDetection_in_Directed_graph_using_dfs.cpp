#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adlist[N];
bool vis[N];
bool path[N];
bool isCycle;

void dfs(int parent)
{
    cout<<parent<<endl;
    vis[parent] = true;
    path[parent] = true;

    for(int child: adlist[parent]) {
        if (path[child]) 
        {
            isCycle = true;
        }
        if (!vis[child]) {
            dfs(child);
        }
    }
    path[parent] = false;
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
    }

    memset(vis, false, sizeof(vis));
    memset(path, false, sizeof(path));
    isCycle = false;

    for(int i=0; i<n; i++) {
        if (!vis[i]) {
            dfs(i);
        }
    }
    cout<<"------------"<<endl;
    if (isCycle) cout<<"Cycle Found"<<endl;
    else cout<<"Cycle not found"<<endl;

    return 0;
}