#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a;
    char str[100];
    cin >> a;
    getchar();
    cin.getline(str, 100);
    cout << a << endl;
    cout << str << endl;

    // int n;
    // cin >> n;
    // int arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    return 0;
}