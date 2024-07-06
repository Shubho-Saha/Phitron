#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next = NULL;
    Node *prev = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void push(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    cout<<"list print: ";
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool isSame(Node *head1, Node *head2) {
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = true;
    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) {
            flag = false;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (tmp1 != NULL || tmp2 != NULL) {
        flag = false;
    }
    if (flag) cout<<"Same";
    else cout<<"Not Same";
    return flag;
}


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    cout<<"Enter first doubly linked-list: ";
    int x;
    while (true) {
        cin>>x;
        if (x == -1) break;
        push(head1, tail1, x);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    cout<<"Enter 2nd doubly linked-list: ";
    int val;
    while(true) {
        cin>>val;
        if (val == -1) break;
        push(head2, tail2, val);
    }

   isSame(head1, head2);

    return 0;
}