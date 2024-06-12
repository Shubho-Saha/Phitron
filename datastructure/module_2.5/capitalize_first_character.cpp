#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string> str(n);

    for(int i=0; i<n; i++) {
        cin>>str[i];
    }

    for(int i=0; i<n; i++) {
        str[i][0] = str[i][0] - 32;
    }

    for(string s:str) {
        cout<<s<<endl;
    }

    return 0;
}