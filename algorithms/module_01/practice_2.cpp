#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    vector<int> adList[nodes];
    int adMat[nodes][nodes];
    memset(adMat, 0, sizeof(adMat));

    for(int i=0; i<edges; i++) {
        int a, b;
        cin>>a>>b;
        adList[a].push_back(b);

        adMat[a][b] = 1;
    }

    for(int i=0; i<nodes; i++) {
        for(int j=0; j<nodes; j++) {
            cout<<adMat[i][j]<<" ";
        }
        cout<<endl;
    }

    if (adMat[4][1]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    cout<<endl<<"Node connection in adjacency list:"<<endl;
    for(vector<int> v: adList) {
        for(int x: v) {
            cout<<x<<" ";
        }
        cout<<endl;
    }

    return 0;
}