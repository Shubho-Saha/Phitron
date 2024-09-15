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
        adlist[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (adlist[x].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            vector<int> v;
            for (int a : adlist[x])
            {
                v.push_back(a);
            }
            sort(v.begin(), v.end(), greater<int>());
            for (int x : v)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}