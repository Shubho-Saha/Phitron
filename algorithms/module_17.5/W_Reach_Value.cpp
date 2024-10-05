#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool reachVal(ll currentVal, ll targetVal) 
{
    if (currentVal == targetVal) return true;
    if (currentVal > targetVal) return false;

    return (reachVal(currentVal*10, targetVal)) || (reachVal(currentVal*20, targetVal));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll N;
        cin>>N;
        if (reachVal(1, N)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}