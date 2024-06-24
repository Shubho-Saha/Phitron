#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin >> c;
    int ascii = int(c);

    if (ascii >= int('0') && ascii <= int('9'))
        cout << "IS DIGIT";
    else if (ascii >= int('A') && ascii <= int('Z'))
    {
        cout << "ALPHA" << endl
             << "IS CAPITAL";
    }

    else if (ascii >= int('a') && ascii <= int('z'))
    {
        cout << "ALPHA" << endl
             << "IS SMALL";
    }

    return 0;
}