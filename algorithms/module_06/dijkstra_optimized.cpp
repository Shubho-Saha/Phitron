#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<pair<int, int>> adlist[N];
int dis[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int nodeValue = parent.first;
        int nodeCost = parent.second;

        for (pair<int, int> child : adlist[nodeValue])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (nodeCost + childCost < dis[childNode])
            {
                dis[childNode] = nodeCost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adlist[a].push_back({b, c});
        adlist[b].push_back({a, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    int src;
    cin >> src;
    dijkstra(src);

    for (int i = 0; i < n; i++)
    {
        cout << i << " " << dis[i] << endl;
    }

    return 0;
}