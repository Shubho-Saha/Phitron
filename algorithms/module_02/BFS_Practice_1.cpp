#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void BFSTraversal(int src, vector<vector<int>> &adlist, vector<bool> &visited, vector<int> &level, vector<int> &parent)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while(!q.empty())
    {
        int root = q.front();
        q.pop();

        cout<<root<<" ";
        auto vec = adlist[root];
        for(auto x : vec)
        {
            if (!visited[x]) {
                q.push(x);
                visited[x] = true;
                level[x] = level[root]+1;
                parent[x] = root;
            }
        }
    }
    cout<<nl;
}

int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;
    vector<vector<int>> adlist(n+1, vector<int>());
    vector<bool> visited(n+1, false);
    vector<int> level(n+1, -1);
    vector<int> parent(n+1, -1);

    for(int i=0; i<e; i++) {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    
    BFSTraversal(3, adlist, visited, level, parent);
    for(int i=1; i<=n; i++) {
        cout<<i<<" : "<<level[i]<<nl;
    }

    int des = 1;
    while(des != -1) {
        cout<<des<<" ";
        des = parent[des];
    }

    // Adjacency List
    // for(int i=1; i<=n; i++) {
    //     auto vec = adlist[i];
    //     cout<<i<<" : ";
    //     for(auto x : vec) {
    //         cout<<x<<" ";
    //     }
    //     cout<<nl;
    // }

    return 0;
}