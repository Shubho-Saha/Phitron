#include <bits/stdc++.h>
using namespace std;


int main()
{
    list<int> mylist;
    int q;
    cin>>q;
    int x, v, ln;

    while(q--) {
        cin>>x>>v;
        if (x == 0) {
            mylist.push_front(v);
        } else if (x == 1) {
            mylist.push_back(v);
        } else if (x == 2) {
            ln = mylist.size();
            if (v >= 0 && v < ln) {
                mylist.erase(next(mylist.begin(), v));
            }
        }

        cout<<"L -> ";
        for(int v:mylist) {
            cout<<v<<" ";
        }
        cout<<endl;
        cout<<"R -> ";
        for(auto it = mylist.end(); it != mylist.begin();){
            it--;
            cout<<*it<<" ";
        }
        cout<<endl;
    }

    return 0;
}