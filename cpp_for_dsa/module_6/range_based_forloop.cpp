#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //normal for loop
    for(int i=0; i<s.size(); i++) {
        cout<<s[i]<< " ";
    }
    cout<<endl;

    //ranged based for loop
    for(char c:s) {
        cout<<c<<" ";
    }

    return 0;
}