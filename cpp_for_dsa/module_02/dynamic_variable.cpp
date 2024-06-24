#include <bits/stdc++.h>
using namespace std;

int ** func()
{
    int *a = new int;
    *a = 555;
    cout << "func adress stored at a: " << a << endl;
    cout << "func address of a: " << &a << endl;

    return &a;
    // return &a;
}

int main()
{

    int **p = func();
    cout << "main> stack ad of a: " << p << endl;

    return 0;
}