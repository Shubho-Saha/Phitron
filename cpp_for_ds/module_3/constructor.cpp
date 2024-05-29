#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int cls, roll;
    double gpa;
    char name[100];

    Student(int cls, int roll, double gpa)
    {
        this->cls = cls;
        (*this).roll = roll;
        this->gpa = gpa;
    }
};

int main()
{
    Student adi(3, 10, 4.01);
    cin.getline(adi.name, 100);

    Student joy(4, 22, 4.50);
    cin.getline(joy.name, 100);

    cout << adi.name << " " << adi.cls << " " << adi.roll << " " << adi.gpa << endl;
    cout <<joy.name << " " << joy.cls << " " << joy.roll << " " << joy.gpa << endl;

    return 0;
}