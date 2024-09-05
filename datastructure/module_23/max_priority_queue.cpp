#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;

    while (true)
    {
        int x;
        cin >> x;

        if (x == 1)
        {
            int v;
            cin >> v;
            pq.push(v);
        }
        else if (x == 2)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        else if (x == 3)
        {
            if (pq.empty())
                cout << "empty queue" << endl;
            else
                pq.pop();
        }
        else
        {
            break;
        }
    }

    return 0;
}