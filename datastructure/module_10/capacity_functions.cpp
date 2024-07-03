#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {11, 22, 33, 44, 55};
    cout<<mylist.max_size()<<endl;
    cout<<mylist.size()<<endl;
    
    if (mylist.empty()) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;

    mylist.resize(2);
    cout<<mylist.size()<<endl;
    for(int x:mylist) {
        cout<<x<<" ";
    }
    cout<<endl;

    mylist.resize(5);
    for(int x:mylist) {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<mylist.size()<<endl;

    mylist.clear();
    cout<<mylist.size()<<endl;
    cout<<mylist.empty();

    return 0;
}