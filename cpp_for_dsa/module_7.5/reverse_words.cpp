#include <bits/stdc++.h>
using namespace std;

void print(string str) {
    for(int i=str.size()-1; i>=0; i--) {
        cout<<str[i];
    }

}

int main()
{
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    ss>>word;
    print(word);
    while (ss>>word) {
        cout<<" ";
        print(word);
    }
    
    return 0;
}