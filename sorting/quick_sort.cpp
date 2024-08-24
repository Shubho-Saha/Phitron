#include <bits/stdc++.h>
using namespace std;

int pivot(int *arr, int start, int end) {
    int pivotVal = arr[(start+end)/2];
    int swapIdx = start;

    for(int i=start+1; i<= end; i++) {
        if (arr[i] < pivotVal) {
            swapIdx++;
            swap(arr[swapIdx], arr[i]);
        }
    }
    swap(arr[swapIdx], arr[start]);
    return swapIdx;
}

int *quickSort(int *arr, int left, int right) {

    if (left < right) {
        int pivotIdx = pivot(arr, left, right);
        quickSort(arr, left, pivotIdx-1);
        quickSort(arr, pivotIdx+1, right);
    }

    return arr;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    quickSort(arr, 0, n-1);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    // int *ar = quickSort(arr, 0, n-1);
    // for(int i=0; i<n; i++) {
    //     cout<<ar[i]<<" ";
    // }
    return 0;
}