#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        stack<char> myst;
        string str;
        cin >> str;

        myst.push(str[0]);

        for (int i = 1; i < str.size(); i++)
        {
            if (str[i] == '1')
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
            else
            {
                myst.push(str[i]);
            }
        }

        if (myst.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}