#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist;

    int x;
    while (true) {
        cin>>x;
        if (x == -1) break;
        mylist.push_back(x);
    }

    mylist.sort();
    mylist.unique();

    for(int val:mylist) {
        cout<<val<<" ";
    }

    return 0;
}