#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    cout << mn << " " << mx << endl;

    swap(a, b);
    cout<< a << " " << b << endl;

    return 0;
}