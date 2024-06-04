#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    int math;
    int eng;
};

bool cmp(Student a, Student b) {
    if (a.eng == b.eng) {
        if (a.math == b.math) {
            return a.id < b.id;
        } else {
            return a.math > b.math;
        }
    } else {
        return a.eng > b.eng;
    }
}

int main()
{
    int n;
    cin >> n;
    Student s[n];

    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        cin >> s[i].name >> s[i].cls >> s[i].section >> s[i].id >> s[i].math >> s[i].eng;
    }

    sort(s, s+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].section << " " << s[i].id << " " << s[i].math << " " << s[i].eng << endl;
    }

    return 0;
}