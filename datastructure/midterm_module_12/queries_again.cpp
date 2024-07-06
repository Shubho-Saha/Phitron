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

int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void print(Node *head)
{
    Node *tmp = head;
    cout<<"L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void printReverse(Node *tail)
{
    Node *temp = tail;
    cout<<"R -> ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
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

void unshift(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void insert(Node *&head, Node *&tail, int pos, int val)
{
    if (pos == 0)
    {
        unshift(head, tail, val);
        return;
    }

    int ln = size(head);

    if (pos == ln)
    {
        push(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    int x, v, ln;
    while (q--)
    {
        cin >> x >> v;
        ln = size(head);
        if (x < 0 || x > ln)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert(head, tail, x, v);
            print(head);
            printReverse(tail);
        }
    }

    return 0;
}