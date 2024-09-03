#include <bits/stdc++.h>
using namespace std;

void insert(vector<int> &v, int val)
{
    v.push_back(val);
    int currentIdx = v.size() - 1;

    while (currentIdx != 0)
    {
        int parentIdx = (currentIdx - 1) / 2;
        if (v[parentIdx] > v[currentIdx])
        {
            swap(v[parentIdx], v[currentIdx]);
        }
        else
            break;

        currentIdx = parentIdx;
    }
}
int main()
{
    vector<int> mxHeap;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        insert(mxHeap, x);
    }

    return 0;
}