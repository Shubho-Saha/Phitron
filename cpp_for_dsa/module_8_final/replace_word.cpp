#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        while (true)
        {
            int idx = s1.find(s2);
            if (idx != -1)
            {
                s1.replace(idx, s2.size(), "#");
            }
            else
            {
                break;
            }
        }

        cout << s1 << endl;
    }

    return 0;
}