#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr[5] = {22, 33, 44, 55, 66};

    // vector<int>::iterator it; // initializing iterator
    v.insert(v.begin()+4, arr, arr+3); // inserting array elements from 0th index to 2nd index at 4th position of v vector
    
    // using auto to automatically declare iterator
    for(auto it=v.begin(); it<v.end(); it++) {
        cout<<*it<<endl;
    }

    return 0;
}