#include <bits/stdc++.h>
using namespace std;

const int mxN = 1009;
int n;

bool isValid(int x, int y) {
    return (x<=n && x>=1 && y<=n && y>=1);
}
bool visited[mxN][mxN];
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

void bfs(int kx, int ky)
{
    queue<pair<int,int>> q;
    q.push({kx, ky});
    visited[kx][ky] = true;

    while(!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for(int i=0; i<8; i++) 
        {
            int DX = x + dx[i];
            int DY = y + dy[i];
            if (isValid(DX, DY) && !visited[DX][DY]) {
                q.push({DX, DY});
                visited[DX][DY] = true;
            }
        }
    }
}
int main()
{
    
    cin>>n;
    int qx, qy, kx, ky, tx, ty;
    cin>>qx>>qy;
    cin>>kx>>ky;
    cin>>tx>>ty;

    for(int i=0; i<8; i++) 
    {
        int DX = qx + dx[i];
        int DY = qy + dy[i];

        while(isValid(DX, DY)) 
        {
            visited[DX][DY] = true;
            DX += dx[i];
            DY += dy[i];
        }
    }

    bfs(kx, ky);

    if (visited[tx][ty]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}