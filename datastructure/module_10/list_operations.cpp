#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a >= b;
}
int main()
{
    list<int> myList = {11, 44, 33, 22, 77, 55, 33, 44, 33};

    // Removing specific value from the entire list
    myList.remove(33); // Removes all 33's from the list
    for(int val:myList) {
        cout<<val<<" ";
    }
    cout<<endl;

    // Sorting the list in ascending order
    myList.sort();
    for(int val:myList) {
        cout<<val<<" ";
    }
    cout<<endl;

    // Sorting list in descending order
    // myList.sort(greater<int>()); // built in compare func
    myList.sort(cmp); // my compare function
    for(int v:myList) {
        cout<<v<<" ";
    }
    cout<<endl;

    // Removing duplicates from sorted list
    myList.unique();
    for(int val:myList) {
        cout<<val<<" ";
    }
    cout<<endl;

    // Reversing the whole list.
    myList.reverse();
    for(int v:myList) {
        cout<<v<<" ";
    }


    return 0;
}