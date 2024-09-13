#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;

    vector<pair<int, int>> v;

    while(e--)
    {
        int a, b;
        cin>>a>>b;
        v.push_back({a,b});
    }

    // 1. Using normal for loop
    // for(int i=0; i<v.size(); i++) {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }

    // 2. Using Ranged based for loop
    for(pair<int, int> p:v) {
        cout<<p.first<<" "<< p.second<<endl;
    }

    cout<<"-----"<<endl;

    // 3. Ranged based for loop using Auto
    for(auto p:v) {
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}