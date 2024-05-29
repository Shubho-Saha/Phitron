#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int ln = strlen(s);
        sort(s, s+ln);
        for (int i = 0; i < ln; i++)
        {
            if (s[i] != ' ')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}