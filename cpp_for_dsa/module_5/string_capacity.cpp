#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World This is Shubho";
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // cout<<s.max_size()<<endl;
    // cout<<s<<endl;
    // if (s.empty()) cout<<"empty\n";
    // else cout<<"not empty\n";
    // s.clear();
    // cout<<s.size()<<endl;
    s.resize(5);
    s.resize(8, 'X');
    cout<<s<<endl;

    return 0;
}