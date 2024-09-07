#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<>> pq;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int com;
        cin >> com;
        if (com == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (com == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (com == 2)
        {
            if (!pq.empty())
                pq.pop();
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
    }

    return 0;
}