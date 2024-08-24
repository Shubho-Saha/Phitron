#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int sz) {

    for(int i=sz-1; i>0; i--) {
        bool swp = false;

        for(int j=0; j<i; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swp = true;
            }
        }
        if (!swp) break;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    bubbleSort(arr, n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}