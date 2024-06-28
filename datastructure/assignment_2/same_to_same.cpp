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
    tail = newNode;
}

bool same2same(Node *head1, Node *head2) {
    if (size(head1) != size(head2)) return 0;
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    bool flag = 1;
    while (tmp1 != NULL) {
        if (tmp1->val != tmp2->val) {
            flag = 0;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return flag;
}


int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        push(head1, tail1, x);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int v;
    while(true) {
        cin>>v;
        if (v == -1) break;
        push(head2, tail2, v);
    }

    if (same2same(head1, head2)) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}