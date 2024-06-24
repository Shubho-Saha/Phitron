#include <bits/stdc++.h>
using namespace std;

void func(int* &p) {

    p = NULL;
    cout<<"add of p: "<<&p<<endl;
    cout<<"val of p: "<<p<<endl;
}

int main()
{
    int val = 10;
    int *ptr = &val;

    func(ptr);
    cout<<"val of ptr: "<<ptr<<endl;
    cout<<"add of ptr: "<<&ptr<<endl;
    cout<<*(&val)<<endl;

    return 0;
}