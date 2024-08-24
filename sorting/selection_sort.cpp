#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int sz) {
    for(int i=0; i<sz-1; i++) {
        int mn = i;
        for(int j=i+1; j<sz; j++) {
            if (arr[j] < arr[mn]) {
                mn = j;
            }
        }
        swap(arr[i], arr[mn]);
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

    selectionSort(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}