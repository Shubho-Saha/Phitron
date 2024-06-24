#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    int ch[26] = {0};

    for(char c:s) {
        ch[c-'a']++;
    }

    for(char i='a'; i<'z'; i++) {
        for(int j=0; j<ch[i-'a']; j++) {
            cout<<i<<endl;
        }
    }

    return 0;
}