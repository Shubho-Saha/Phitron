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


void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Head inserted"<<endl<<endl;
}

void insert_at_position(Node *head, int pos, int val) {
     Node *newNode = new Node(val);
     Node *temp = head;

    for(int i=1; i<pos; i++) {
        temp = temp->next;
        if (temp == NULL) {
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    if (temp == NULL) {
        cout<<endl<<"Invalid Index"<<endl<<endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<endl<<"inserted at pos "<<pos<<endl<<endl;
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

    cout<<"Enter Queries Number: ";
    int q;
    cin>>q;
    while (q--) {
        cout<<"Enter index and values with space: ";
        int idx, val;
        cin>>idx>>val;
        if (idx == 0) {
            insert_at_head(head, val);
        } else {
        insert_at_position(head, idx, val);
        }
        print(head);
    }
    

    return 0;
}