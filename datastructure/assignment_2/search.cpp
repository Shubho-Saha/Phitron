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

void push(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int searchIndex(Node *head, int val) {
    Node *temp = head;
    bool flag = false;
    int idx = 0;
    while (temp != NULL) {
        if (temp->val == val) {
            flag = true;
            break;
        }
        idx++;
        temp = temp->next;
    }
    if (flag) return idx;
    else return -1;
}

int main()
{
    
    int t;
    cin>>t;
    while(t--) {
        Node *head = NULL;
        Node *tail = NULL;
        int v;
        while(true) {
            cin>>v;
            if (v== -1) break;
            push(head, tail, v);
        }
        int x;
        cin>>x;
        int idx = searchIndex(head, x);
        cout<<idx<<endl;
    }

    return 0;
}