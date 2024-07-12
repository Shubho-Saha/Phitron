#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        stack<char> myst;
        myst.push(str[0]);

        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == '0')
            {
                if (!myst.empty() && myst.top() == '1')
                {
                    myst.pop();
                }
                else
                {
                    myst.push(str[i]);
                }
            }
            else if (str[i] == '1')
            {
                if (!myst.empty() && myst.top() == '0')
                {
                    myst.pop();
                }
                else
                {
                    myst.push(str[i]);
                }
            }
        }

        if (myst.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}