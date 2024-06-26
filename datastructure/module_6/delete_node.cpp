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
    cout<<endl;
    cout<<"Your Linked List: ";
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;

}

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Head inserted"<<endl<<endl;
}

void insert_at_tail(Node *&head, int val) {

    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        cout<<endl<<"Head inserted"<<endl;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    cout<<endl<<"inserted at tail"<<endl;
}


void insert_at_position(Node *head, int pos, int val) {
    Node *newNode = new Node(val);
    Node *temp = head;

    for(int i=1; i<pos; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    cout<<endl<<"inserted at pos "<<pos<<endl<<endl;
}

void delete_at_pos(Node *head, int pos) {
    Node *temp = head;
    for(int i=1; i<pos; i++) {
        temp = temp->next;
    }

    Node *dltNode = temp->next;
    temp->next = temp->next->next;
    delete dltNode;
    cout<<"Deleted from position "<<pos<<endl<<endl;
}

void delete_head(Node *&head) {
    if (head != NULL) {
        Node *temp = head;
        head = head->next;
        delete temp;
    } else {
        cout<<"Linked List is empty"<<endl<<endl;
    }
    
}

int main()
{
    Node *head = NULL;
    cout<<"enter 1 to start the program: ";
    int flag = 0;
    int x;
    cin>>x;
    flag = x;

    while(flag) {
        cout<<"1: Insert at tail"<<endl;
        cout<<"2: Insert at any position"<<endl;
        cout<<"3: Print Linked List"<<endl;
        cout<<"4: Insert at head"<<endl;
        cout<<"5: Delete at any position"<<endl;
        cout<<"6: Delete Head"<<endl;
        cout<<"7: Terminate the program"<<endl;
        cout<<"Choose your option: ";
        int op;
        cin>>op;
        if(op == 1) {
            cout<<"Enter Value: ";
            int v;
            cin>>v;
            insert_at_tail(head, v);
            cout<<endl;
        } else if (op == 2) {
            int pos, val;
            cout<<"Enter position: ";
            cin>>pos;
            cout<<"Enter value: ";
            cin>>val;
            if (pos == 0) {
                insert_at_head(head, val);
            } else {
                insert_at_position(head, pos, val);
            }
            
            
        } else if (op == 3) {
            print(head);
        } else if (op == 4) {
            cout<<"Enter value: ";
            int val;
            cin>>val;
            insert_at_head(head,val);
        } else if (op == 5) {
            cout<<"Enter position: ";
            int pos;
            cin>>pos;
            if (pos == 0) {
                delete_head(head);
            } else {
                delete_at_pos(head, pos);
            }
        } else if (op == 6) {
            delete_head(head);
        } else if (op == 7) {
            break;
        } else {
            cout<<"Invalid option"<<endl<<endl;
        }

    }

    return 0;
}