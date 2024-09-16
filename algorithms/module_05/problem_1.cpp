#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adlist[N];
bool vis[N];
int parentArray[N];
bool isCycle;

void bfs(int src) 
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty()) 
    {
        int parent = q.front();
        q.pop();
        cout<<parent<<" : "<<parentArray[parent]<<endl;

        for(int child: adlist[parent]) {
            if (vis[child] && parentArray[parent] != child) {
                cout<<"parent: "<<parent<<" child: "<<child<<endl;
                isCycle = true;
            }
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                parentArray[child] = parent;
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
            bfs(i);
        }
    }
    cout<<"-------------"<<endl;
    if (isCycle) cout<<"Cycle Found"<<endl;
    else cout<<"Cycle not found"<<endl;

    return 0;
}