#include <iostream>
#include<stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    cin >> a;

    int b;
    cin >> b;

    cout << fixed << setprecision(4) << a << endl;

    (b % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}