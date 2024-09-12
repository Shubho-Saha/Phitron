#include <bits/stdc++.h>
using namespace std;

vector<int> adList[1005];
int visited[1005];
int level[1005];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int child: adList[parent]) {
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
                level[child] = level[parent] + 1;
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
        adList[a].push_back(b);
        adList[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));

    int src;
    cin>>src;
    bfs(src);

    for(int i=0; i<6; i++) {
        cout<<level[i]<<endl;
    }

    return 0;
}