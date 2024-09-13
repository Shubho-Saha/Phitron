#include <bits/stdc++.h>
using namespace std;

vector<int> adlist[100];
int level[100];
bool visited[100];

void bfs()
{
    queue<int> q;
    q.push(0);
    visited[0] = true;
    level[0] = 0;

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
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    int lvl;
    cin>>lvl;
    memset(level, -1, sizeof(level));
    memset(visited, false, sizeof(visited));
    bfs();

    vector<int> levelNodes;
    for(int i=0; i<n; i++) {
        if (level[i] == lvl) {
            levelNodes.push_back(i);
        }
    }
    reverse(levelNodes.begin(), levelNodes.end());
    for(int x: levelNodes) {
        cout<<x<<" ";
    }

    return 0;
}