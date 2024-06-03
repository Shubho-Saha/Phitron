#include <bits/stdc++.h>
using namespace std;

class Student 
{
    public:
    string name;
    int id;
    int marks;
};

bool cmp(Student a, Student b) {
    // if (a.marks < b.marks) {
    //     return true;
    // } else if (a.marks > b.marks) {
    //     return false;
    // } else {
    //     if (a.id < b.id) {
    //         return true;
    //     } else return false;
    // }

    if (a.marks == b.marks) {
        return a.id < b.id;
    } else {
        return a.marks < b.marks;
    }
}

int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++) {
        cin>>s[i].name>>s[i].id>>s[i].marks;
    }

    sort(s, s+n, cmp);

    for(int i=0; i<n; i++) {
        cout<<s[i].name<<" "<<s[i].id<<" "<<s[i].marks<<endl;
    }

    return 0;
}