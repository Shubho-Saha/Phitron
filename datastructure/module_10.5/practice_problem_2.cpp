#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void push(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void print(Node *head) {
    Node *tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void printReverse(Node *tail) {
    Node *tmp = tail;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

void reverse(Node *&head, Node *&tail) {
    if (head == NULL || head->next == NULL) {
        return;
    }

    tail = head;

    Node *previous = NULL;
    Node *current = head;
    Node *nextNode;

    while (current != NULL) {
        nextNode = current->next;
        current->next = previous;
        current->prev = nextNode;
        previous = current;
        current = nextNode;
    }
    head = previous;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true) {
        cin>>v;
        if (v == -1) break;
        push(head, tail, v);
    }

    print(head);
    reverse(head, tail);
    print(head);
    printReverse(tail);

    return 0;
}