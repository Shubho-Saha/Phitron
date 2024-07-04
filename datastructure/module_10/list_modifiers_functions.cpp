#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Assigning one list to another
    // list<int> list1 = {11, 22, 33, 44, 55, 66, 77};
    // list<int> list2;

    // list2.assign(list1.begin(), list1.end()); // long cut
    // list2 = list1; // short cut
    // for (int x : list2)
    // {
    //     cout << x << " ";
    // }
    // cout<<endl;


    // list2.pop_back();
    // list2.pop_front();
    // for(int x: list2) {
    //     cout<<x<<" ";
    // }
    // cout<<endl;

    // list2.push_back(70);
    // list2.push_front(10);
    // for(int x: list2) {
    //     cout<<x<<" ";
    // }

    
    list<int> mylist = {11, 22, 25, 25};
    for(int val:mylist) {
        cout<<val<<" ";
    }
    cout<<endl;

    // Insert one element 
    mylist.insert(next(mylist.begin(), 3), 40);
    for(int v:mylist) {
        cout<<v<<" ";
    }
    cout<<endl;

    // Insert multiple elements at once
    mylist.insert(next(mylist.begin(), 2), {25, 27, 29});
    for(int v:mylist) {
        cout<<v<<" ";
    }
    cout<<endl;

    // Inserting multiple elements from an array
    // int arr[3] = {95, 85, 75};
    // mylist.insert(next(mylist.begin(), 3), arr, arr+2);
    // for(int x:mylist) {
    //     cout<<x<<" ";
    // }

    // Insert another list in a position
    list<int> list1 = {99, 88, 777, 809};
    auto it = next(list1.begin(), 3);
    mylist.insert(next(mylist.begin(),1), list1.begin(), next(list1.begin(), 4));
    for(int x: mylist) {
        cout<<x<<" ";
    }
    cout<<endl;

    // Removing one element from a spefic position
    mylist.erase(next(mylist.begin(), 0)); // removing first element
    for(int x: mylist) {
        cout<<x<<" ";
    }
    cout<<endl;

    // Removing multiple elements from list based on position.
    mylist.erase(mylist.begin(), next(mylist.begin(), 4));
    for(int x: mylist) {
        cout<<x<<" ";
    }
    cout<<endl;

    // Replacing elements with other element
    replace(mylist.begin(), mylist.end(), 25, 999);
    for(int x: mylist) {
        cout<<x<<" ";
    }
    cout<<endl;

    // Finding specific value in list - it returns an iterator
    auto itr = find(mylist.begin(), mylist.end(), 40);
    if (itr == mylist.end()) {
        cout<<"Not found"<<endl;
    } else {
        cout<<"found "<<*itr<<endl;
    }

    return 0;
}