#include <bits/stdc++.h>
#include <limits>
using namespace std;

const int N = 1e5 + 5;
vector<pair<long long int, long long int>> adlist[N];
long long int dis[N];

class cmp
{
public:
    bool operator()(pair<long long int, long long int> a, pair<long long int, long long int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        long long int nodeValue = parent.first;
        long long int nodeCost = parent.second;

        for (pair<long long int, long long  int> child : adlist[nodeValue])
        {
            long long int childNode = child.first;
            long long int childCost = child.second;

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
    long long int n, e;
    cin >> n >> e;
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adlist[a].push_back({b, c});
    }

    for (int i = 0; i <= n; i++)
    {
        dis[i] = numeric_limits<long long>::max();
    }

    int src;
    cin >> src;
    dijkstra(src);

    int t;
    cin>>t;
    while(t--)
    {
        int d, dw;
        cin>>d>>dw;
        if (dis[d] >= INT_MAX) {
            cout<<"NO"<<endl;
            continue;
        }
        if (dw >= dis[d]) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}