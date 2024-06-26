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

int size (Node *head) {
    if (head == NULL) return 0;
    Node *temp = head;
    int count = 0;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }

    return count;
}

void reverseList(Node *&head) {
    int length = size(head);
    if (length < 2) {
        return;
    } else if (length == 2) {
        Node *tmp = head->next;
        tmp->next = head;
        head->next = NULL;
        head = tmp;
        return;
        
    } else {
        Node *prev = NULL;
        Node *cur = head;
        Node *next = head->next;
        Node *temp = cur;

        while(cur->next != NULL) {
            temp = cur;
            cur->next = prev;
            cur = next;
            next = next->next;
            prev = temp;
        }
        cur->next = prev;
        head = cur;
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

    cout<<"size: "<<size(head)<<endl<<endl;
    cout<<"before reverse: ";
    print(head);
    reverseList(head);
    cout<<"After reverse"<<endl;
    print(head);

    return 0;
}