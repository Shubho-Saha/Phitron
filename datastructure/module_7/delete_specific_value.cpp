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

void print(Node *head) {
    if (head == NULL) {
        cout<<endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

void removeValue(Node *&head, int val) {
    if (head == NULL) return;

    if (head->next == NULL && head->val == val) {
        delete head;
        head = NULL;
        return;
    }

    Node *tmp = head;
    while(tmp->next != NULL) {
        if (tmp->next->val == val) {
            Node *dltNode = tmp->next;
            tmp->next = tmp->next->next;
            delete dltNode;
        }
        tmp = tmp->next;
        if (tmp == NULL) break;
    }
}
int main()
{
    Node *head = NULL;
    int x;
    while (true)
    {
        cin >> x;
        if (x == -1)
            break;
        push(head, x);
    }
    int v;
    cin>>v;
    removeValue(head, v);
    print(head);
    return 0;
}