#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
    string name;
    int age;
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

int main()
{
    Person *jodu = new Person("Jodu mia", 25);
    Person *kodu = new Person("Kudu Mia", 26);

    *jodu = *kodu;
    delete kodu;
    cout<<jodu->name<<" "<<jodu->age << endl;

    return 0;
}