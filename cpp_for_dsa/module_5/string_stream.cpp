#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello I'm Mrinmoy Saha";
    stringstream ss(s);
    string word;

    while (ss>>word) {
        cout<<word<<endl;
    }

    return 0;
}