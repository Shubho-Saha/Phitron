#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int id;
    int marks;
    Student(string name, int id, int marks) {
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
};

class cmp
{
    public:
    bool operator()(Student a, Student b) {
        if (a.marks > b.marks) return true;
        else if (a.marks < b.marks) return false;
        else {
            if (a.id > b.id) return true;
            else return false;
        }
    }

};

int main()
{
    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin>>n;
    while(n--) {
        string a;
        int b, c;
        cin>>a>>b>>c;
        Student obj(a, b, c);

        pq.push(obj);
    }

    while(!pq.empty()) {
        cout<<pq.top().name<<" "<<pq.top().id<<" "<<pq.top().marks<<endl;
        pq.pop();
    }

    return 0;
}