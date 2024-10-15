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
        int l=0, r =n-1;
        while(l <= r )
        {
            int midIdx = l + (r-l)/2;
            if (preSum[midIdx] >= s) {
                idx = midIdx;
                r = midIdx - 1;
            } else {
                l = midIdx+1;
            }
        }
        if (idx != -1) cout<<idx+1<<'\n';
        else cout<<idx<<'\n';
        
    }

    return 0;
}