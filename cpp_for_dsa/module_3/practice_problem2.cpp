#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jerseyNo;
    char country[100];
};

int main()
{
    Cricketer *dhoni = new Cricketer;
    dhoni->jerseyNo = 44;
    char tmp[100] = "India";
    strcpy(dhoni->country, tmp);

    cout << dhoni->country << " " << dhoni->jerseyNo << endl;

    Cricketer *kohli = new Cricketer;
    strcpy(kohli->country, dhoni->country);
    kohli->jerseyNo = dhoni->jerseyNo;

    delete dhoni;
    cout << kohli->country << " " << kohli->jerseyNo << endl;

    return 0;
}