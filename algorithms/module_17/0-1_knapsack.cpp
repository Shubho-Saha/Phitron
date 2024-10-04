#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int value[], int BW) 
{
    if (n < 0 || BW==0) return 0;

    if (weight[n] <= BW) 
    {
        int opt1 = knapsack(n-1, weight, value, BW-weight[n]) + value[n];

        int opt2 = knapsack(n-1, weight, value, BW);

        return max(opt1, opt2);
    } else {
        return knapsack(n-1, weight, value, BW);
    }
}
int main()
{
    int n;
    cin>>n;

    int weight[n];
    int value[n];

    for(int i=0; i<n; i++) {
        cin>>weight[i];
    }
    for(int i=0; i<n; i++) {
        cin>>value[i];
    }

    int BW;
    cin>>BW;

    int ans = knapsack(n-1, weight, value, BW);
    cout<<ans<<endl;

    return 0;
}