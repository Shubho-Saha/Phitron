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

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

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
    newNode->prev = tail;
    tail = newNode;
}

void sortFunc(Node *head, Node *tail) {
    if (head == NULL || head->next == NULL) return;

    for (Node *left = head; left->next != NULL; left= left->next) {
        for (Node *right = left->next; right != NULL; right = right->next) {
            if (left->val > right->val) {
                swap(left->val, right->val);
            }
        }
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while (true) {
        cin>>x;
        if (x == -1) break;
        push(head, tail, x);
    }

    print(head);
    sortFunc(head, tail);
    print(head);

    return 0;
}