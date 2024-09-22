#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, e;
    cin>>n>>e;

    ll adjMat[n][n];

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            adjMat[i][j] = INT_MAX;
            if (i == j) 
                adjMat[i][j] = 0;
        }
    }

    while(e--) {
        int a, b, c;
        cin>>a>>b>>c;
        adjMat[a][b] = c;
    }

    cout<<"Before Floyd Warshall"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (adjMat[i][j] == INT_MAX) {
                cout<<"In"<<" ";
            } else {
                cout<<adjMat[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    for(int k = 0; k<n; k++) {
        for(int i = 0; i<n; i++) {
            for(int j=0; j<n; j++) {
                if (adjMat[i][k] + adjMat[k][j] < adjMat[i][j]) {
                    adjMat[i][j] = adjMat[i][k] + adjMat[k][j];
                }
            }
        }
    }

    cout<<"After Floyd Warshall"<<endl;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if (adjMat[i][j] == INT_MAX) {
                cout<<"In"<<" ";
            } else {
                cout<<adjMat[i][j]<<" ";
            }
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++) {
        if (adjMat[i][i] < 0) {
            cout<<"negative cycle detected"<<endl;
            break;
        }
    }

    return 0;
}