#include <bits/stdc++.h>
using namespace std;

vector<int> adlist[100];
bool visited[100];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    visited[src] = true;
    bool flag = false;
    while(!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int element = p.first;
        int level = p.second;
        if (element == des) {
            cout<<level<<endl;
            flag = true;
        }

        for(int child : adlist[element]) {
            if (!visited[child]) {
                q.push({child, level+1});
                visited[child] = true;
            }
        }
    }
    if (!flag) {
        cout<<"Not found"<<endl;
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
    int src;
    cin>>src;
    int des;
    cin>>des;
    bfs(src, des);

    return 0;
}