#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void DFS(int src, vector<vector<int>> &adlist, vector<bool> &visited) {
    
    cout<<src<<" ";
    visited[src] = true;
    for(auto child : adlist[src]) {
        if (!visited[child]) {
            DFS(child, adlist, visited);
        }
    }
}
int main()
{
    fastIO();
    int n, e;
    cin>>n>>e;
    vector<vector<int>> adlist(n+1, vector<int>());
    vector<bool> visited(n+1, false);
    while(e--)
    {
        int a, b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    int cnt = 0;
    for(int i=1; i<=n; i++) {
        if (!visited[i]) {
            DFS(i, adlist, visited);
            cnt++;
        }
    }
    cout<<nl;

    cout<<cnt<<nl;
    

    return 0;
}