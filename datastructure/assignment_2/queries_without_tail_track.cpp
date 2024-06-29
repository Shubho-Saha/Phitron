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
    
    Node *temp = head;
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while(tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_head(Node *&head) {
    if (head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
    
}

void delete_at_pos(Node *head, int pos) {
    if (head == NULL) {
        delete_head(head);
        return;
    }
    Node *temp = head;
    for(int i=1; i<pos; i++) {
        temp = temp->next;
        if (temp == NULL) {
            return;
        }
    }
    if (temp->next == NULL) {
        return;
    }
    Node *dltNode = temp->next;
    temp->next = temp->next->next;
    delete dltNode;
}


int main()
{
    int q;
    cin>>q;
    int x, v;
    Node *head = NULL;
    while (q--) {
        cin>>x>>v;
        if (x == 0) {
            insert_at_head(head, v);
        } else if (x == 1) {
            insert_at_tail(head, v);
        } else if (x == 2) {
            if (v >= 0 && v < size(head)) {
                if (v == 0) {
                    delete_head(head);
                } else {
                    delete_at_pos(head, v);
                }
            }
        }

        print(head);
    }

    return 0;
}