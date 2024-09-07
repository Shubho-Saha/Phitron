#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b) {
    if (a.first < b.first) return true;
    else if (a.first > b.first) return false;
    else {
        if (a.second > b.second) return true;
        else return false;
    }
}
int main()
{
    int n;
    cin>>n;
    list<pair<string, int>> mylist;

    while(n--) {
        string name;
        int id;
        cin>>name>>id;
        mylist.push_back({name, id});
    }

    mylist.sort(cmp);

    for(auto it=mylist.begin(); it != mylist.end(); ++it) {
        cout<<it->first<<" " <<it->second<<endl;
    }

    return 0;
}