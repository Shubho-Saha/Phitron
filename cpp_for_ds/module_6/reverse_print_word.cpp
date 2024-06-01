#include <bits/stdc++.h>
using namespace std;

void print(stringstream &s) {
    string word;
    if (s>>word) {
        print(s);
        cout<<word<<endl;
    }
}
int main()
{
    string str;
    getline(cin, str);
    stringstream ss(str);

    print(ss);

    return 0;
}