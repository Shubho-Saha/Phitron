#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string eg = "EGYPT";
    cin >> s;

    while (true)
    {
        int idx = s.find(eg);
        if (idx != -1)
        {
            s.replace(idx, 5, " ");
        }
        else
        {
            break;
        }
    }
    cout<<s;

    return 0;
}