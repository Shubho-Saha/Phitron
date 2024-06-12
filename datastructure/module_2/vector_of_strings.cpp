#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // vector<string> str;

    // for(int i=0; i<n; i++) {
    //     string s;
    //     cin>>s;
    //     str.push_back(s);
    // }

    int n;
    cin>>n;
    vector<string> str(n);

    for(int i=0; i<n; i++) {
        cin>>str[i];
    }

    for(string s:str) {
        cout<<s<<endl;
    }

    return 0;
}