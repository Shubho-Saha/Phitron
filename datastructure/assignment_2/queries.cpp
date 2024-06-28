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

void insert_at_head(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_pos(Node *&head, Node *&tail, int pos) {
    if (head->next == NULL) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    if (pos == 0) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    if (pos == size(head)-1) {
        Node *tmp = head;
        while (tmp->next->next != NULL) {
            tmp = tmp->next;
        }
        Node *dltNode = tmp->next;
        tmp->next = NULL;
        tail = tmp;
        delete dltNode;
        return;
    }
    Node *tmp = head;
    for(int i=1; i<pos; i++) {
        tmp = tmp->next;
    }
    Node *dltNode = tmp->next;
    tmp->next = tmp->next->next;
    delete dltNode;

}


int main()
{
    int q;
    cin>>q;
    int x, v;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--) {
        cin>>x>>v;
        if (x == 0) {
            insert_at_head(head, tail, v);
        } else if (x == 1) {
            insert_at_tail(head, tail, v);
        } else if (x == 2) {
            int ln = size(head);
            if (v >= 0 && v < ln) {
                delete_at_pos(head, tail, v);
            }
        }
        print(head);
    }

    return 0;
}