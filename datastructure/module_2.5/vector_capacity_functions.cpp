#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    // 1. Initializing vector with integers from 1 to 10
    for(int i=0; i<n; i++) {
        v[i] = i+1;
    }
    // printing all the values
    for(int x:v) {
        cout<<x<<" ";
    }
    cout<<endl;

    // 2. Printing initial vector properties.
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;
    cout<<"max size "<<v.max_size()<<endl;

    // 3. Resizing the vector
    v.resize(20, 0);
    for(int x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"new size "<<v.size()<<endl;
    cout<<"new capacity "<<v.capacity()<<endl;

    // 4. Clearing the vector
    v.clear();
    cout<<"size after clear "<<v.size()<<endl;
    cout<<"capacity after clear "<<v.capacity()<<endl;

    // 5. Checking if the vector is empty
    if (v.empty()){
        cout<<"Vector is empty\n";
    } else {
        cout<<"Not empty\n";
    }

    // 6. Resizing the vector to it's original size
    v.resize(10, 100);
    for(int x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"size "<<v.size()<<endl;
    cout<<"capacity "<<v.capacity()<<endl;

    return 0;
}