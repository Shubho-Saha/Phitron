#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;

    while (cin >> s1 >> s2)
    {
        int mp1[26] = {0};
        int mp2[26] = {0};
        bool flag = true;

        for (char c : s1)
        {
            c = tolower(c);
            mp1[c-'a']++;
        }
        for(char c: s2) 
        {
            c = tolower(c);
            mp2[c-'a']++;
        }
        
        for(char c: s2)
        {
            if (mp2[c-'a'] > mp1[c-'a']) {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "Possible" << '\n';
        else
            cout << "Impossible" << '\n';
    }

    return 0;
}