#include <bits/stdc++.h>
using namespace std;

int *arfunc() {
    int *arr = new int[3];
    for(int i=0; i<3; i++) {
        cin>>arr[i];
    }

    return arr;
}

class Student 
{
    public:
    int id;
    int marks;

    Student(int id, int marks) {
        this->id = id;
        this->marks = marks;
    }

};

Student *func() {
    Student *rahim = new Student(30, 98);

    return rahim;
}

int main()
{
    Student *rhm = func();
    cout<<rhm->id<<" "<<rhm->marks<<endl;

    int *ans = arfunc();
    cout<<ans[0]<<endl;
    delete ans;
    cout<<ans[0];
    return 0;
}