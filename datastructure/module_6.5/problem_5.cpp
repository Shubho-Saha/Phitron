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

int isSorted(Node *head) {
    if (head == NULL) return -1;
    int flag = 1;
    Node *temp = head;
    while (temp->next != NULL) {
        if (temp->val > temp->next->val) {
            flag = 0;
            break;
        }
        temp = temp->next;
    }
    return flag;
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

    int flag = isSorted(head);
    if (flag == 1) {
        cout<<"YES";
    } else if (flag == 0) {
        cout<<"NO";
    } else {
        cout<<"Empty List";
    }

    return 0;
}