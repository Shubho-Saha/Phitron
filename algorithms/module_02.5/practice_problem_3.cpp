#include <bits/stdc++.h>
using namespace std;

vector<int> adlist[100];

int main()
{
    int n, e;
    cin>>n>>e;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        adlist[a].push_back(b);
        adlist[b].push_back(a);
    }

    int x;
    cin>>x;
    cout<<adlist[x].size()<<endl;

    return 0;
}