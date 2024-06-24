#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[101];
    char section;
    int marks;
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student a, b, c;

        cin >> a.id >> a.name >> a.section >> a.marks;
        cin >> b.id >> b.name >> b.section >> b.marks;
        cin >> c.id >> c.name >> c.section >> c.marks;

        Student temp = a;

        if (b.marks > temp.marks) {
            temp = b;
        } else if (b.marks == temp.marks) {
            if (b.id < temp.id) temp = b;
        }

        if (c.marks > temp.marks) {
            temp = c;
        } else if (c.marks == temp.marks) {
            if (c.id < temp.id) temp = c;
        }
        

        cout<<temp.id << " " <<temp.name << " " <<temp.section << " " << temp.marks << endl;

    }
    return 0;
}