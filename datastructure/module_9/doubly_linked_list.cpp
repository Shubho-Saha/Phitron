#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev = NULL;
    Node *next = NULL;
    Node(int val)
    {
        this->val = val;
    }
};

int size(Node *head) {
    Node *temp = head;
    int count = 0;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int search(Node *head, int val) {
    if (head == NULL) return -1;
    int flag = false;
    int idx = 0;
    Node *temp = head;
    while (temp != NULL) {
        if (temp->val == val) {
            flag = true;
            break;
        }
        idx++;
        temp = temp->next;
    }
    if (flag) return idx;
    else return -1;
}

void print(Node *head)
{
    Node *tmp = head;
    cout<<endl<<"Your Doubly Linked-List: ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl<<endl;
}

void printReverse(Node *tail) {
    Node *temp = tail;
    cout<<endl<<"Reversed Doubly Linked-List: ";
    while (temp != NULL) {
        cout<< temp->val << " ";
        temp = temp->prev;
    }
    cout<<endl<<endl;
}

void push(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        cout<<endl << val << " added at head." <<endl<<endl;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    cout << endl << val << " added at tail." <<endl<<endl;
}

void pop(Node *&head, Node *&tail) {
    if (head == NULL) {
        cout<<endl<<"List is empty."<<endl<<endl;
        return;
    }

    if (head->next == NULL) {
        cout<<endl<<head->val<< " removed from head. List is empty now."<<endl<<endl;
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node *dltNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    cout<<endl<<dltNode->val<<" removed from tail."<<endl<<endl;
    delete dltNode;
}

void unshift(Node *&head, Node *&tail, int val) {
    Node *newNode = new Node (val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        cout<<endl<<val<<" added at head."<<endl<<endl;
        return;
    }

    head->prev = newNode;
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
    head->prev = NULL;
    cout<<endl<<dltNode->val<<" removed from head."<<endl<<endl;
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
    Node *temp = head;
    for(int i=1; i<pos; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
    cout<<endl<<newNode->val<<" added at pos "<<pos<<endl<<endl;
}

void remove(Node *&head, Node *&tail, int pos) {
    if (pos == 0) {
        shift(head, tail);
        return;
    }

    int ln = size(head);
    if (pos < 0 || pos >= ln) {
        cout<<endl<<"Invalid Index."<<endl<<endl;
        return;
    }

    if (pos == ln-1) {
        pop(head, tail);
        return;
    }

    Node *temp = head;
    for(int i=1; i<pos; i++) {
        temp = temp->next;
    }

    Node *dltNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    cout<<endl<<dltNode->val<<" remove from pos "<<pos<<endl<<endl;
    delete dltNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        cout << "Select Options From Below" <<endl;
        cout << "1.  Push       2. Pop      3. Unshift"<<endl; // Done
        cout << "4.  Shift      5. Insert   6. Remove"<<endl;
        cout << "7.  Search     8. Size     9. Print Reverse"<<endl;
        cout << "10. Print     11. Push Multiple values"<<endl; // Done
        cout << "12. Terminate The Program"<<endl;
        cout<< "Choose Your Option: ";
        int op;
        cin >> op;
        if (op == 1) {
            cout<<"Enter Value: ";
            int val;
            cin>>val;
            push(head, tail, val);
        }
        else if (op == 2) {
            pop(head, tail);
        }
        else if (op == 3) {
            cout<<"Enter Value: ";
            int val;
            cin>>val;
            unshift(head, tail, val);
        }
        else if (op == 4) {
            shift(head, tail);
        }
        else if (op == 5) {
            cout<<"Enter position and value: ";
            int pos, val;
            cin>>pos>>val;
            insert(head, tail, pos, val);
        }
        else if (op == 6) {
            cout<<"Enter Position: ";
            int pos;
            cin>>pos;
            remove(head, tail, pos);
        }
        else if (op == 7) {
            cout<<"Enter Value: ";
            int val;
            cin>>val;
            int index = search(head, val);
            if (index == -1) {
                cout<<endl<<"Value not found"<<endl<<endl;
            } else {
                cout<<endl<<"Value found at pos "<<index<<endl<<endl;
            }
        }
        else if (op == 8) {
            cout<<endl<<"Size of your list is: "<<size(head)<<endl<<endl;
        }
        else if (op == 9) {
            printReverse(tail);
        }
        else if (op == 10)
        {
            print(head);
        }
        else if (op == 11) {
            cout<<"Enter values (-1 to break) : ";
            int v;
            while (true) {
                cin>>v;
                if (v == -1) break;
                push(head, tail, v);
            }
        }
        else if (op == 12) {
            cout<<endl<<"Program Terminated"<<endl<<endl;
            break;
        }
         else {
            cout<<endl<<"Invalid Option. Choose again"<<endl<<endl;
        }
        
    }

    // print(head);

    return 0;
}