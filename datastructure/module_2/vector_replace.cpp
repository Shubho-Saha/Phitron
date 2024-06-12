#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 3, 1, 4, 5, 9, 3, 1, 8, 1, 4};
    // replace(staring pointer, ending pointer, element to be replaced, new element)
    replace(v.begin(), v.end()-2, 1, 69);
    for(int x:v) {
        cout<<x<<" ";
    }
    cout<<endl;

    //find function will return the pointer of the item we are searching. if the item isn't there then it will return the end pointer. (we cann't print the pointer of vector but can print after dereferencing)
    // vector<int>::iterator it; // long way to declare 
    // it = find(v.begin(), v.end(), 18);

    auto it = find(v.begin(), v.end(), 8); // shortcut way to declare iterator.


    if (it == v.end()) {
        cout<<"Not found\n";
    }else {
        cout<<"found\n";
    }

    return 0;
}