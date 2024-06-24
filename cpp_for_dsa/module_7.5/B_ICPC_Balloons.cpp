#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string prblm;
        cin >> prblm;
        int count = 0;

        int freq[26] = {0};
        for (char c : prblm)
        {
            if (freq[c - 'A'] == 0)
            {
                freq[c - 'A'] = 1;
                count += 2;
            }
            else
            {
                count++;
            }
        }

        cout << count<<endl;
    }

    return 0;
}