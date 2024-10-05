#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int bw, vector<int> weight, vector<int> profit ){

    if (n < 0 || bw == 0) return 0;

    int op1 = 0, op2 = 0;
    if (weight[n] <= bw) {
        op1 = profit[n] + knapsack(n-1, bw-weight[n], weight, profit);
    }
    op2 = knapsack(n-1, bw, weight, profit);

    return max(op1, op2);
}
int main()
{
    int n, bw;
    cin>>n>>bw;

    vector<int> weight;
    vector<int> profit;

    for(int i=0; i<n; i++) {
        int wi, pi;
        cin>>wi>>pi;
        weight.push_back(wi);
        profit.push_back(pi);
    }


    int maxProfit = knapsack(n-1, bw, weight, profit);
    cout<<maxProfit;

    
    return 0;
}