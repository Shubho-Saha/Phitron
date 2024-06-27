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

int getDifference (Node *head) {
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *temp = head;
    while (temp != NULL) {
        mx = max(mx, temp->val);
        mn = min (mn, temp->val);
        temp = temp->next;
    }
    return mx-mn;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        push(head, tail, x);
    }

    int ans = getDifference(head);
    cout<<ans;

    return 0;
}