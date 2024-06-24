#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++) {
        if (arr[i] == 0) {
            int left = 0, right = i-1;
            while (left <= right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}