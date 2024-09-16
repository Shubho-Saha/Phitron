#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adlist[N];
bool vis[N];
int parentArr[N];
bool flag;



void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int par = q.front();
        q.pop();
        cout<<par<<endl;

        for(int child : adlist[par]) {
            if (vis[child] && parentArr[par] != child) {
                flag = true;
            }
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                parentArr[child] = par;
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
        int a,b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parentArr, -1, sizeof(parentArr));
    flag = false;

    for(int i=0; i<n; i++) {
        if (!vis[i]) {
            bfs(i);
        }
    }
    if (flag) cout<<"Cycle Found"<<endl;
    else cout<<"Cycle not found"<<endl;



    return 0;
}