#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A, B, C;
    char S, Q;

    cin >> A >> S >> B >> Q >> C;

    if (S == '+') {
        if (A+B==C) cout <<"Yes\n";
        else cout<<A+B<<endl;
    } else if (S == '-') {
        if (A - B == C) cout<<"Yes\n";
        else cout<< A - B <<endl;
    } else if (S == '*') {
        if (A * B == C) cout << "Yes\n";
        else cout<<A*B<<endl;
    }

    return 0;
}