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

void print(Node *head) {
    Node *temp = head;
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

}

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

void removeDuplicate(Node *&head) {
    if (head->next == NULL) return;

    if (head->next->next == NULL) {
        if (head->val == head->next->val) {
            Node *dltNode = head->next;
            head->next = NULL;
            delete dltNode;
            return;
        }
    }

    Node *left = head;
    Node *right;
    while(left->next != NULL) {
        bool flag = false;
        right = left;
        while(right->next != NULL) {
            
            if (left->val == right->next->val) {
                Node *dltNode = right->next;
                right->next = right->next->next;
                delete dltNode;
                flag = true;
                break;
                
            }
            right = right->next;
            if (right == NULL) break;
        }
        
        if (flag == true) continue;
        left = left->next;
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

    removeDuplicate(head);
    print(head);

    return 0;
}