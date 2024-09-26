#include <bits/stdc++.h>
using namespace std;

vector<int> adlist[100005];

bool visited[100005];
int parent[100005];
int level[100005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;

    while (!q.empty()) {
        int root = q.front();
        q.pop();

        for (int child : adlist[root]) {
            if (!visited[child]) {
                q.push(child);
                visited[child] = true;
                level[child] = level[root] + 1;
                parent[child] = root;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 100005; i++) {
            adlist[i].clear();
        }

        int n;
        cin >> n;
        int e = n - 1;

        while (e--) {
            int a, b;
            cin >> a >> b;
            adlist[a].push_back(b);
            adlist[b].push_back(a);
        }

        int q;
        cin >> q;
        
        while (q--) {
            memset(visited, false, sizeof(visited));
            memset(parent, -1, sizeof(parent));
            memset(level, -1, sizeof(level));

            int src, des;
            cin >> src >> des;

            bfs(src);

            int lv = level[des];
            int midCity;

            if (lv == 0) {
                midCity = src;
            } else {
                int x = (lv + 1) / 2;
                while (x-- && des != -1) {
                    des = parent[des];
                }
                midCity = des;
            }

            cout << midCity << '\n';
        }
    }
    return 0;
}
