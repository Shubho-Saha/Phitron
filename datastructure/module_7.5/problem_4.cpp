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

int maxValue (Node *head) {
    if (head == NULL) return -1;
    int mx = INT_MIN;
    Node *temp = head;
    while (temp != NULL) {
        mx = max(mx, temp->val);
        temp = temp->next;
    }
    return mx;
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

    int ans = maxValue(head);
    cout<<"Max Value: "<<ans;

    return 0;
}