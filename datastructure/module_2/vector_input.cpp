#include <bits/stdc++.h>
using namespace std;
int main()
{
    // First type of taking input 
    vector<int> v;
    int n;
    cin>>n;
    // as vector size wasn't declared initially so we can't take input directly. we have to use push_back() function as it increases vector size everytime we use it.
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }


    // Second type of taking input for vector
    int m;
    cin>>m;
    vector<int> v2(m);

    for(int i=0; i<m; i++) {
        cin>>v2[i];
    }

    for(int x:v2) {
        cout<<x<<" ";
    }

    return 0;
}