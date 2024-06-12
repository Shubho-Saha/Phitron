#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    // cout<<v.size()<<endl;
    // cout<<v.max_size()<<endl;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    // cout<<v.capacity()<<endl;

    // v.clear();
    // cout<<v.size();
    v.resize(3);
    v.resize(8, 5);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<< " ";
    }
    // cout<<endl;
    // cout<<v[3]<<endl;
    // cout<<v.empty()<<endl;

    return 0;
}