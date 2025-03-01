#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

bool flag;
void BFS(int src, vector<vector<int>> &addList,  vector<int> &vis, vector<int> &parent)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;

    while(!q.empty())
    {
        int root = q.front();
        q.pop();
        cout<<root<<" ";

        for(auto child : addList[root]) {
            if (!vis[child]) {
                q.push(child);
                vis[child] = true;
                parent[child] = root;
            } else {
                if (child != parent[root]) flag = true;
            }
        }
    }
}
int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;
    vector<vector<int>> addList(n+1, vector<int>());
    vector<int> vis(n+1, false);
    vector<int> parent(n+1, -1);
    for(int i=1; i<=e; i++) {
        int a, b;
        cin>>a>>b;
        addList[a].push_back(b);
        addList[b].push_back(a);
    }

    flag = false;
    for(int i=1; i<=n; i++) {
        if (!vis[i]) {
            BFS(i, addList, vis, parent);
        }
    }
    cout<<nl;

    if (flag) {
        cout<<"Cycle Found"<<nl;
    } else {
        cout<<"Cycle not found"<<nl;
    }

    return 0;
}