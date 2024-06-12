#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int dupCount = 1;
    int count = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] == v[i + 1] - 1)
        {
            if (dupCount > 1)
            {
                count += dupCount;
                dupCount = 1;
            }
            else
            {
                count++;
            }
        }
        else if (v[i] == v[i + 1])
        {
            dupCount++;
        } else {
            dupCount = 1;
        }
    }

    cout<<count;

    return 0;
}