#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;

        int consCount = 0;
        int vowelCount = 0;
        int digitCount = 0;

        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                digitCount++;
            }
            else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                vowelCount++;
            }
            else
            {
                consCount++;
            }
        }

        int consBox, vowelBox;
        if (consCount % 3 == 0)
        {
            consBox = consCount / 3;
        }
        else
        {
            consBox = consCount / 3 + 1;
        }

        if (vowelCount % 2 == 0)
        {
            vowelBox = vowelCount / 2;
        }
        else
        {
            vowelBox = vowelCount / 2 + 1;
        }

        int boxCount = max({consBox, vowelBox, digitCount});
        cout << boxCount << endl;
    }

    return 0;
}