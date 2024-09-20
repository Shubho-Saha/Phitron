#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    int sz = str.size();
    
    for(int i=sz-1; i>=0; i--) {
        char c = tolower(str[i]);
        cout<<c;
    }

    return 0;
}