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

int size(Node *head)
{
    if (head == NULL)
        return 0;
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

void print(Node *head)
{
    if (head == NULL)
    {
        cout << endl
             << "Empty Linked List" << endl
             << endl;
        return;
    }

    Node *temp = head;
    cout << endl
         << "Your Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}

void push(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        cout<<endl<<val<<" added at head."<<endl<<endl;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
    cout<<endl<<val<<" added at tail."<<endl<<endl;
}

void pop(Node *&head, Node *&tail) {
    if (head == NULL) {
        cout<<endl<<"Empty List."<<endl<<endl;
        return;
    }

    if (head->next == NULL) {
        cout<<endl<<head->val<<" removed from head. List is empty now."<<endl<<endl;
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node *temp = head;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    Node *dltNode = temp->next;
    temp->next = NULL;
    tail = temp;
    cout<<endl<<dltNode->val<<" removed from tail."<<endl<<endl;
    delete dltNode;
}

void unshift(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        cout<<endl<<val<<" added at head."<<endl<<endl;
        return;
    }
    newNode->next = head;
    head = newNode;
    cout<<endl<<val<<" added at head."<<endl<<endl;
}

void shift(Node *&head, Node *&tail) {
    if (head == NULL) {
        cout<<endl<<"List is empty."<<endl<<endl;
        return;
    }

    if (head->next == NULL) {
        cout<<endl<<head->val<<" removed from head. List is empty now."<<endl<<endl;
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node *dltNode = head;
    head = head->next;
    cout<<endl<<dltNode->val<<" removed from head"<<endl<<endl;
    delete dltNode;
}

void insert(Node *&head, Node *&tail, int pos, int val) {
    if (pos == 0) {
        unshift(head, tail, val);
        return;
    }
    int ln = size(head);
    if (pos < 0 || pos > ln) {
        cout<<endl<<"Invalid Index"<<endl<<endl;
        return;
    }

    if (pos == ln) {
        push(head, tail, val);
        return;
    }

    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i=1; i<pos; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout<<endl<<val<<" added at "<<pos<<"th index"<<endl<<endl;
}

void remove(Node *&head, Node *&tail, int pos) {
    if (pos == 0) {
        shift(head, tail);
        return;
    }
    int ln = size(head);
    if (pos < 0 || pos >= ln) {
        cout<<endl<<"Invalid Index"<<endl<<endl;
        return;
    }

    if (pos == ln-1) {
        pop(head, tail);
        return;
    }

    Node *tmp = head;
    for(int i=1; i<pos; i++) {
        tmp = tmp->next;
    }
    Node *dltNode = tmp->next;
    tmp->next = tmp->next->next;
    cout<<endl<<dltNode->val<<" removed from "<<pos<<"th index"<<endl<<endl;
    delete dltNode;
}

void reverse(Node *&head, Node *&tail) {
    if (head == NULL || head->next == NULL) {
        cout<<endl<<"Nothing to reverse."<<endl<<endl;
        return;
    } 
    tail = head;
    Node *prev = NULL;
    Node *current = head;
    Node *next;

    while (current!= NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        
    }
    
    head = prev;
    cout<<endl<<"Your Linked List has been reversed."<<endl<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout << "Select Options from below" << endl;
        cout << "1: Push" << "     2: Pop" << endl; // Done
        cout << "3: Unshift" << "  4: Shift" << endl; // Done
        cout << "5: Insert" << "   6: Remove" << endl; // Done
        cout << "7: Reverse" << "  8: Print" << endl; // Done
        cout << "9: Size" << "    10: Terminate" << endl; // Done
        cout << "Enter Option Number: ";
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: ";
            int val;
            cin >> val;
            push(head, tail, val);
        } 
        else if (op == 2) 
        {
            pop(head, tail);
        } 
        else if (op == 3) 
        {
            cout<<"Enter value: ";
            int v;
            cin>>v;
            unshift(head, tail, v);
        } 
        else if (op == 4) 
        {
            shift(head, tail);
        } 
        else if (op == 5) 
        {
            cout<<"Enter Position: ";
            int pos;
            cin>>pos;
            cout<<"Enter Value: ";
            int val;
            cin>>val;
            insert(head, tail, pos, val);
        }
        else if (op == 6)
        {
            cout<<"Enter Position: ";
            int pos;
            cin>>pos;
            remove(head, tail, pos);
        }
        else if (op == 7) {
            reverse(head, tail);
        }
        else if (op == 8)
        {
            print(head);
        }
        else if (op == 9)
        {
            int length = size(head);
            cout << endl
                 << "Size of your LinkedList: " << length << endl
                 << endl;
        }

        else if (op == 10)
        {
            cout << endl
                 << "Program Terminated" << endl;
            break;
        }
    }

    return 0;
}