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

        vector<int> height(n);
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }

        int maxfirst;
        int maxfirstIdx;
        int maxSecond;
        int maxSecondIdx;
        if (height[0] > height[1])
        {
            maxfirst = height[0];
            maxfirstIdx = 0;
            maxSecond = height[1];
            maxSecondIdx = 1;
        }
        else
        {
            maxfirst = height[1];
            maxfirstIdx = 1;
            maxSecond = height[0];
            maxSecondIdx = 0;
        }

        for (int i = 2; i < n; i++)
        {
            if (height[i] > maxfirst)
            {
                maxSecond = maxfirst;
                maxSecondIdx = maxfirstIdx;
                maxfirst = height[i];
                maxfirstIdx = i;
            }
            else
            {
                if (height[i] > maxSecond)
                {
                    maxSecond = height[i];
                    maxSecondIdx = i;
                }
            }
        }

        if (maxSecondIdx < maxfirstIdx)
        {
            cout << maxSecondIdx << " " << maxfirstIdx << endl;
        }
        else
        {
            cout << maxfirstIdx << " " << maxSecondIdx << endl;
        }
    }

    return 0;
}