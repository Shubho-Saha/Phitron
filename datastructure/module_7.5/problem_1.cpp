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
    int count = 0;
    Node * temp = head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }

    return count;
}

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


int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    cout<<"Enter values for 1st List: ";
    int v1;
    while (true) {
        cin>>v1;
        if (v1 == -1) break;
        push(head1, v1);
    }
    cout<<endl<<"Enter values for 2nd List: ";
    int v2;
    while (true) {
        cin>>v2;
        if (v2 == -1) break;
        push(head2, v2);
    }

    cout<<endl;
    if (size(head1) == size(head2)) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }

    return 0;
}