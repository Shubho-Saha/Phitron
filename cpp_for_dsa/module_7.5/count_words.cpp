#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);

    bool flag = false;
    int count = 0;
    for (char c:s) {
        if (isalpha(c)) {
            if (flag == false) count++;
            flag = true;
        }
        if (!isalpha(c)) {
            flag = false;
        }

    }

    cout<<count;
    return 0;
}