#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {11, 22, 33, 44, 55, 66};

    // access the head element
    cout<<mylist.front()<<endl;

    // access the tail element
    cout<<mylist.back()<<endl;

    // access specific position's element
    cout<< *next(mylist.begin(), 3)<<endl; // access index 3

    return 0;
}