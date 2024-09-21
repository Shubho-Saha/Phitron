#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<long long int> arr(n);
    vector<long long int> preSum(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    preSum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    int q;
    cin >> q;
    while (q--)
    {
        int idx = -1;
        long long int s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (preSum[i] >= s)
            {
                idx = i + 1;
                break;
            }
        }
        cout << idx << '\n';
    }

    return 0;
}