#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;

        int ln = s.size();
        int left = 0, right = ln - 1;

        while (left <= right)
        {
            if (s[left] != s[right])
            {
                int cost = abs(s[left] - s[right]);
                k -= cost;
            }
            left++;
            right--;
        }

        if (k >= 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    return 0;
}