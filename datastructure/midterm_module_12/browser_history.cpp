#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *next;
    Node *prev;
    Node(string val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int main()
{
    list<string> mylist;
    string x;
    while (true)
    {
        cin >> x;
        if (x == "end")
            break;
        mylist.push_back(x);
    }
    list<string>::iterator current;
    list<string>::iterator temp;
    int q;
    cin>>q;
    string com, add;
    while (q--) {
        cin>>com;
        if (com == "visit") {
            temp = current;
            cin>>add;
            current = find(mylist.begin(), mylist.end(), add);
            if (current == mylist.end()) {
                cout<<"Not Available"<<endl;
                // if (current == mylist.end()) 
                current = temp;
            
            } else {
                cout<<*current<<endl;
            }
        } else if (com == "next") {
            current++;
            if (current == mylist.end()) {
                cout<<"Not Available"<<endl;
                current--;
            } else {
                cout<<*current<<endl;
            }
        } else if (com == "prev") {
            current--;
            if (current == mylist.end()) {
                cout<<"Not Available"<<endl;
                current++;
            } else {
                cout<<*current<<endl;
            }
        }
    }

    return 0;
}


