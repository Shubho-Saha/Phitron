#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> u = {10, 20, 30, 40, 50};
    // u = v; //assigning one vector to another vector
    u.push_back(60); // pushing element at the end;
    u.pop_back(); // removing element from the end

    // u.insert(u.begin()+2, 3); // inserting value at specific position

    //inserting vector values at specific position
    // u.insert(u.begin()+1, v.begin()+2, v.end());

    //Delete one element from a specific position.
    // u.erase(u.begin()+2);

    //Deleting multiple element 
    u.erase(u.begin()+1, u.end()-1); //it will delete element from staring point to one element before ending point
    for(int a:u) {
        cout<<a<<" ";
    }

    return 0;
}