#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> adlist[n];

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adlist[a].push_back(b);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        bool flag = false;
        for (int x : adlist[a])
        {
            if (x == b)
            {
                flag = true;
                break;
            }
        }
        if (a == b)
            flag = true;
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}