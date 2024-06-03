#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
};

int main()
{
    int n;
    cin>>n;
    Person p[n];

    for(int i=0; i<n; i++) {
        cin.ignore();
        getline(cin, p[i].name);
        cin>>p[i].age;
    }

    for(int i=0; i<n; i++) {
        cout<<p[i].name<< " " << p[i].age <<endl;
    }

    return 0;
}