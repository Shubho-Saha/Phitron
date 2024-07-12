#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue<string> myq;
    int t;
    cin >> t;
    while (t--)
    {

        int com;
        string name;

        cin >> com;
        if (com == 0)
        {
            cin >> name;
            myq.push(name);
        }
        else if (com == 1)
        {
            if (myq.empty())
            {
                cout << "Invalid\n";
            }
            else
            {
                cout << myq.front() << endl;
                myq.pop();
            }
        }
    }

    return 0;
}