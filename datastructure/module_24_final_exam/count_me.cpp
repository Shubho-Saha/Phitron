#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        
        string sentence;
        getline(cin, sentence);
        

        map<string, int> mymap;
        stringstream ss(sentence);
        string word;

        int count = 0;
        string name;

        while (ss >> word)
        {
            mymap[word]++;
            if (mymap[word] > count)
            {
                count++;
                name = word;
            }
        }

        cout << name << " " << count << endl;
    }

    return 0;
}