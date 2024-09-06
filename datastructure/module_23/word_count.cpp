#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    getline(cin, sentence);
    stringstream ss(sentence);
    string word;
    map<string, int> mp;

    while(ss>>word) {
        mp[word]++;
    }

    cout<<mp["you"]<<endl;
    for(auto it=mp.begin(); it!=mp.end(); it++) {
        cout<<it->first<<" "<<it->second<<endl;
    }

    // cout<<sentence<<endl;

    return 0;
}