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

    cout<<endl<<"size: "<<size(head)<<endl;

    return 0;
}