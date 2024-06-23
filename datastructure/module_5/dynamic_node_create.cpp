#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(30);

    head->next = a;

    
    cout<<"dy m of head: "<<head<<endl;
    cout<< "ad head.val:  " << &head->val<<endl;
    cout<<&head->next<<endl;
    cout<<"sta mof head: "<<&head<<endl;
    cout<<head->val<<endl;
    cout<<head->next<<endl;
    cout<<"a: "<<a<<endl;
    return 0;
}