#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    string section;
    int id;
};

int main()
{
    int n;
    cin>>n;
    Student s[n];
    for(int i=0; i<n; i++) {
        cin.ignore();
        cin>>s[i].name>>s[i].cls>>s[i].section>>s[i].id;
    }
    int left=0, right = n-1;
    while(left <= right) {
        string tmp = s[left].section;
        s[left].section = s[right].section;
        s[right].section = tmp;

        left++;
        right--;
    }

    for(int i=0; i<n; i++) {
        cout<<s[i].name<<" "<<s[i].cls<<" "<<s[i].section<<" "<<s[i].id<<endl;
    }

    return 0;
}