#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        list<int> mylist;
        int n;
        cin >> n;
        while (n--)
        {
            int x;
            cin >> x;
            mylist.push_back(x);
        }
        mylist.sort();
        mylist.unique();
        for (int x : mylist)
        {
            cout << x << " ";
        }
        cout<<endl;
    }

    return 0;
}