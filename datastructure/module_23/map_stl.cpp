#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mp;

    mp.insert({"shubho", 47});
    mp.insert({"nuhad", 7});
    mp["pranti"] = 0;
    mp["tahsin"] = 1;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << mp["nuhad"] << endl;
    cout << mp["silvy"] << endl;
    if (mp.count("pranti"))
        cout << mp["pranti"] << " ache" << endl;
    else
        cout << "pranti nai" << endl;

    return 0;
}