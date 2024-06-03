#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int id, marks;
};

int main()
{
    int n;
    cin>>n;
    Student student[n];
    for(int i=0; i<n; i++) {
        cin>>student[i].name>>student[i].id>>student[i].marks;
    }

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (student[i].marks > student[j].marks) {
                swap(student[i], student[j]);
            }
            if (student[i].marks == student[j].marks) {
                if (student[i].id > student[j].id) {
                    swap(student[i], student[j]);
                }
            }
        }
    }

    for(int i=0; i<n; i++) {
        cout<<student[i].name<<" "<<student[i].id<<" "<<student[i].marks<<endl;
    }

    return 0;
}