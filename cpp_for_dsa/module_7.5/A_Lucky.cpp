#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int firstHalf = 0;
        int secondHalf = 0;

        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                firstHalf += int(s[i]);
            }
            else
            {
                secondHalf += int(s[i]);
            }
        }

        if (firstHalf == secondHalf)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}