#include <bits/stdc++.h>
using namespace std;

vector<int> adlist[100];
int level[100];
bool visited[100];

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

        for(int child : adlist[parent]) {
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
        int a,b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);

    }

    int q;
    cin>>q;
    while(q--)
    {
        int src, des;
        cin>>src>>des;
        memset(level, -1, sizeof(level));
        memset(visited, false, sizeof(visited));
        bfs(src);
        cout<<level[des]<<endl;

    }

    return 0;
}