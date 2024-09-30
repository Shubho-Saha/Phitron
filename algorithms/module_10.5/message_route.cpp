#include <bits/stdc++.h>
using namespace std;

void bfs(int src,vector<vector<int>> &adlist, vector<bool> &vis, vector<int> &parent, vector<int> &level)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 1;


    while (!q.empty())
    {
        int root = q.front();
        q.pop();
        for (int child : adlist[root])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = root;
                level[child] = level[root] + 1;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adlist(n + 1, vector<int>());
    vector<bool> vis(n + 1, false);
    vector<int> parent(n + 1, -1);
    vector<int> level(n+1, -1);

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    bfs(1, adlist, vis, parent, level);
    int des = n;
    if (vis[n] == false) {
        cout<<"IMPOSSIBLE"<<endl;
    } else {
        cout<<level[n]<<endl;
        stack<int> st;
        while(parent[des] != -1) {
            st.push(des);
            des = parent[des];
        }
        st.push(1);
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
    }

    return 0;
}