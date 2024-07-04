#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev = NULL;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

void print(Node *head)
{
    Node *tmp = head;
    cout<<endl<<"Your Doubly Linked-List: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl<<endl;
}

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

void reverseList(Node *&head, Node *&tail) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    Node *left = head;
    Node *right = tail;

    while (left->next != right) {
        swap(left->val, right->val);
        left = left->next;
        right = right->prev;
        if (left == right) break;
    }
    swap(left->val, right->val);
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    cout<<"Enter Values: ";
    int val;

    while(true) {
        cin>>val;
        if (val == -1) break;
        push(head, tail, val);
    }

    print(head);
    reverseList(head, tail);
    print(head);
    return 0;
}