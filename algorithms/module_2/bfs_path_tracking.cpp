#include <bits/stdc++.h>
using namespace std;

vector<int> adlist[100];
bool visited[100];
int parent[100];
int level[100];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int root = q.front();
        q.pop();

        for(int child: adlist[root]){
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
                level[child] = level[root] + 1;
                parent[child] = root;
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

    memset(visited, false, sizeof(visited));
    memset(parent, -1, sizeof(parent));
    memset(level, -1, sizeof(level));
    int src, des;
    cin>>src>>des;
    bfs(src);
    while(des != -1) {
        cout<<des<<" ";
        des = parent[des];
    }


    return 0;
}