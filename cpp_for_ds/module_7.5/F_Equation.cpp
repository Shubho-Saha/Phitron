#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, n;
    cin>>x>>n;

    int sum = 0;
    int cnt = 2;

    while (cnt <= n) {
        int tmp = 1;
        for(int i=1; i<=cnt; i++) {
            tmp *= x;
        }
        sum += tmp;
        cnt += 2;
    }
    cout<<sum;

    return 0;
}