#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class cmpClass {
    public:
    bool operator()(pair<int,int> a, pair<int,int> b) {
        return a.second > b.second;
    }
};

int main()
{
    fastIO();
    int n;
    cin>>n;

    auto ok = [](pair<int,int>a, pair<int,int> b) {
        if (a.first == b.first) {
            return a.second > b.second;
        } else {
            return a.first > b.first;
        }
    };

    priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(ok) > pq(ok);
    while(n--)
    {
        int a, b;
        cin>>a>>b;
        pq.push({a, b});
    }

    while(!pq.empty())
    {
        cout<<pq.top().first<<"-"<<pq.top().second<<nl;
        pq.pop();
    }

    return 0;
}