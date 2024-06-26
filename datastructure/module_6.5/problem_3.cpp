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

int size(Node *head) {
    if (head == NULL) return 0;
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

void printMiddle(Node *head) {
    if (head == NULL) {
        cout<<"Empty Linked List"<<endl;
        return;
    }
    Node *temp = head;
    int length = size(head);
    if (length % 2 == 0) {
        for(int i=1; i<(length/2); i++) {
            temp = temp->next;
        }
        cout<<endl<<temp->val<<" "<<temp->next->val<<endl;
    } else {
        for(int i=1; i<=(length/2); i++) {
            temp = temp->next;
        }
        cout<<endl<<temp->val<<endl;
    }


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

    printMiddle(head);

    return 0;
}