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

void push(Node *&head, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head) {
    if (head == NULL) {
        cout<<endl<<"Empty Linked List"<<endl<<endl;
        return;
    }
    Node *temp = head;
    cout<<endl;
    cout<<"Your Linked List: ";
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;

}

void reverseList(Node *&head, Node *current) {
    if (current->next == NULL) {
        head = current;
        return;
    }

    reverseList(head, current->next);
    current->next->next = current;
    current->next = NULL;
}



int main()
{
    Node *head = NULL;
    cout<<"Enter values: ";
    while (true) {
        int v;
        cin>>v;
        if (v== -1) break;
        push(head, v);
    }

    print(head);

    reverseList(head, head);

    print(head);

    return 0;
}