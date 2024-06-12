#include <bits/stdc++.h>
using namespace std;
int main()
{
    //initializing vector without size
    // vector<int> v;

    //initializing vector with size
    // vector<int> v(5);

    //initializing vector with size and values
    // vector<int> v(5, 9);

    //initializing vector from another vector
    // vector<int> v2(6, 18);
    // vector<int> v(v2);

    //initializing vector from an array
    int arr[5] = {5, 4, 3, 2, 1};
    vector<int>v(arr+1, arr+4); // (arr+1) is start index & (arr+4) ending index

    //initializing with values
    // vector<int> v = {2, 4, 6};

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<< " ";
    }
    cout<<endl;
    cout<<v.size();

    return 0;
}