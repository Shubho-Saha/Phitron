#include <bits/stdc++.h>
using namespace std;

void bubble(int *arr, int sz)
{
    for(int i=sz-1; i>=0; i--) {
        int mxIdx = i;
        int mx = arr[i];
        
        for(int j=0; j<i; j++) {
            if (arr[j] > mx) {
                mxIdx = j;
                mx = arr[j];
            }
        }
        
        swap(arr[i], arr[mxIdx]);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble(arr, n);
    cout<<"check point"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}