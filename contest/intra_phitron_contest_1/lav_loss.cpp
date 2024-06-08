#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x, y, z;
    cin>>x>>y>>z;

    double profit_price = ((100*x)/(100-y)) + ((x*z)/(100-y));

    cout<<fixed<<setprecision(2)<<profit_price;
    return 0;
}