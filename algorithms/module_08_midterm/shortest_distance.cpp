#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n, e;
    cin >> n >> e;

    ll adjMat[n + 1][n + 1];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adjMat[i][j] = LLONG_MAX;
            if (i == j)
                adjMat[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (c < adjMat[a][b])
        {
            adjMat[a][b] = c;
        }
    }

    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adjMat[i][k] != LLONG_MAX && adjMat[k][j] != LLONG_MAX)
                {
                    if (adjMat[i][k] + adjMat[k][j] < adjMat[i][j])
                    {
                        adjMat[i][j] = adjMat[i][k] + adjMat[k][j];
                    }
                }
            }
        }
    }

    int q;
    cin>>q;
    while(q--)
    {
        int x, y;
        cin>>x>>y;
        if (adjMat[x][y] == LLONG_MAX) {
            cout<<-1<<'\n';
        } else {
            cout<<adjMat[x][y]<<'\n';
        }
    }

    return 0;
}