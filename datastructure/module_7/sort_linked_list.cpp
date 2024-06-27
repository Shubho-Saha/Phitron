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

void push(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(Node *head)
{
    if (head == NULL)
    {
        cout << endl
             << "Empty Linked List" << endl
             << endl;
        return;
    }
    Node *temp = head;
    cout << endl
         << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void sortList(Node *head) {
    if (head == NULL || head->next == NULL) {
        return;
    }
    Node *left = head;
    Node *right;
    while (left->next != NULL) {
        right = left->next;
        while (right != NULL) {
            if (left->val > right->val) {
                swap(left->val, right->val);
            }
            right = right->next;
        }
        left = left->next;
    }
}


int main()
{
    Node *head = NULL;
    cout << "Enter Values: ";
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        push(head, x);
    }

    cout<<"Before sort: ";
    print(head);
    cout<<endl<<"After sort: ";
    sortList(head);
    print(head);

    return 0;
}