#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<>> pq;

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
                cout << "Emty queue" << endl;
        }
        else if (x == 3)
        {
            if (!pq.empty())
                pq.pop();
            else
                cout << "Nothing to delete" << endl;
        }
    }

    return 0;
}