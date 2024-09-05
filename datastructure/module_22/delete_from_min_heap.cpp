#include <bits/stdc++.h>
using namespace std;

void printHeap(vector<int> v)
{
    if (v.empty()) cout<<"Empty Heap";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

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

int deleteMin(vector<int> &v)
{
    if (v.empty()) return -1;
    
    int root = v[0];
    v[0] = v[v.size() -1 ];
    v.pop_back();
    int lastIdx = v.size() - 1;
    int currentIdx = 0;

    while(true)
    {
        int leftIdx = currentIdx * 2 + 1;
        int rightIdx = currentIdx * 2 + 2;

        if (leftIdx <= lastIdx && rightIdx <= lastIdx) {
            if (v[leftIdx] <= v[rightIdx] && v[leftIdx] < v[currentIdx]) {
                swap(v[leftIdx], v[currentIdx]);
                currentIdx = leftIdx;
            } else if (v[rightIdx] <= v[leftIdx] && v[rightIdx] < v[currentIdx]) {
                swap(v[rightIdx], v[currentIdx]);
                currentIdx = rightIdx;
            } else break;
        } else if (v[leftIdx] <= lastIdx) {
            if (v[leftIdx] < v[currentIdx]) {
                swap(v[leftIdx], v[currentIdx]);
                currentIdx = leftIdx;
            } else break;
        } else if (v[rightIdx] <= lastIdx) {
            if (v[rightIdx] < v[currentIdx]) {
                swap(v[rightIdx], v[currentIdx]);
                currentIdx = rightIdx;
            } else break;
        } else break;
    }

    return root;
}

int main()
{
    vector<int> minHeap;

    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        insert(minHeap, x);
    }

    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    cout<<deleteMin(minHeap)<<endl;
    printHeap(minHeap);
    return 0;
}