#include <bits/stdc++.h>
using namespace std;
int main()
{
    int nodeCount, edgeCount;
    cin>>nodeCount>>edgeCount;

    int mat[nodeCount][nodeCount];
    memset(mat, 0, sizeof(mat));

    while(edgeCount--)
    {
        int a, b;
        cin>>a>>b;
        mat[a][b] = 1;
        mat[b][a] = 1;
    }

    for(int i=0; i<nodeCount; i++) {
        for(int j=0; j<nodeCount; j++) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}