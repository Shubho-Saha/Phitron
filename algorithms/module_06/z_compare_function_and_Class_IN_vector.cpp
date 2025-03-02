#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(), x.end()
#define nl '\n'
#define fastIO() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

class cmp {
    public:
    bool operator() (pair<int, int> a, pair<int, int> b) {
        if (a.first == b.first) {
            return a.second > b.second;
        } else {
            return a.first < b.first;
        }
    }
};

bool compare(pair<int,int> a, pair<int, int> b) {
    if (a.first == b.first) {
        return a.second > b.second;
    } else {
        return a.first < b.first;
    }
}
int main()
{
    fastIO();
    int n;
    cin>>n;

    vector<pair<int, int>> vec(n);
    for(int i=0; i<n; i++) {
        cin>>vec[i].first>>vec[i].second;
    }

    auto ok = [](pair<int,int>a, pair<int,int> b) {
        if (a.first == b.first) {
            return a.second > b.second;
        } else {
            return a.first > b.first;
        }
    };

    // sort(all(vec), compare);
    // sort(all(vec), cmp());
    sort(all(vec), ok);
    for(auto p : vec) {
        cout<<p.first<<"-"<<p.second<<nl;
    }
    
    return 0;
}