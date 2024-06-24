#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1>>s2;

    // cout<<s1<<endl<<s2<<endl;
    // s1 += s2;
    // cout<<s1<<endl;
    // s2.append(s1);
    // cout<<s2<<endl;

    s1.push_back('M');
    cout<<s1<<endl;
    s1.pop_back();
    cout<<s1<<endl;
    s2.erase(4,2);
    cout<<s2<<endl;
    s2.replace(4,2, "-mor");
    cout<<s2<<endl;
    s2.insert(4, "Shubho");
    cout<<s2<<endl;

    return 0;
}