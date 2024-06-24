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

void insert_at_tail(Node *&head, int val)
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
    Node *temp = head;
    cout<<"Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    cout<<"enter 1 to start the program: ";
    int flag = 0;
    int x;
    cin>>x;
    flag = x;
    while (flag)
    {
        cout << "option 1: insert at tail" << endl;
        cout << "option 2: print linked list" << endl;
        cout << "option 3: terminate program" << endl;
        int op;
        cin>>op;
        if (op == 1) {
            cout<<"Enter your value: ";
            int v;
            cin>>v;
            insert_at_tail(head, v);
        } else if (op == 2) {
            print(head);
        } else if (op == 3) {
            break;
        }
    }

    return 0;
}