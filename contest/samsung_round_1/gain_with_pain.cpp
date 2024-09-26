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
        bool flag = true;

        while (n--)
        {
            int bt, bs, br;
            cin >> bt >> bs >> br;

            int lt, ls, lr;
            cin >> lt >> ls >> lr;

            int ct, cs, cr;
            cin >> ct >> cs >> cr;

            int st, ss, sr;
            cin >> st >> ss >> sr;

            int at, as, ar;
            cin >> at >> as >> ar;

            if (br != 10 || lr != 10 || cr != 10 || sr != 10 || ar != 10)
            {
                flag = false;
            }
            else if (bt != 2 || lt != 2 || ct != 2 || st != 1 || at != 3)
            {
                flag = false;
            }
            else if (bs != 3 || ls != 3 || cs != 3 || ss != 3 || as != 3)
            {
                flag = false;
            }
        }
        if (flag ) {
            cout<<"Consistent"<<'\n';
        } else {
            cout<<"Inconsistent"<<'\n';
        }
    }

    return 0;
}