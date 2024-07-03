#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1. Initializing list without size
    // list<int> mylist;
    // cout<<mylist.size(); // size will be zero

    // 2. Initializing list with size.
    // list<int> myList(15);
    // cout<<myList.size()<<endl; // size - 15 and TC - O(N)
    // cout<<myList.front(); // output: 0  as all elements are empty

    // 3. Initializing list with size and values.
    // list<int> mylist(5, 100);
    // // we can use ranged based for loop to print list
    // for(int x: mylist) {
    //     cout<<x<<" ";
    // }

    // 4. Initializing list using another list.
    // list<int> list1 = {1, 2, 3, 4, 5};
    // list<int> list2(list1);
    // for(int val:list2) {
    //     cout<<val<<" ";
    // }

    // 5. Initializing list from vector
    vector<int> v = {10, 20, 30, 40, 50};
    list<int> list(v.begin(), v.end()-2);
    for(int v: list) {
        cout<<v<<" "; // Output: 10 20 30
    }
    cout<<endl;

    // 6. Initializing list from an array
    // int arr[5] = {11, 22, 33, 44, 55};
    // list<int> mylist(arr, arr+5);
    // for(int x: mylist) {
    //     cout<<x<<" ";
    // }

    // Printing using Iterator.
    // list<int> mylist(5, 10);
    // for(auto it=mylist.begin(); it != mylist.end(); it++) {
    //     cout<<*it<<" ";
    // }


    return 0;
}