#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node *prev;
    Node (int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack
{
    public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val) {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }

    void pop() {
        if (head == NULL) return;
        sz--;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }

        Node *dltNode = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete dltNode;
    }

    int top() {
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        if (sz == 0) return true;
        return false;
    }
};

int main()
{
    myStack ms;
    int n, v;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>v;
        ms.push(v);
    }

    cout<<ms.size()<<endl;
    while(!ms.empty()) {
        cout<<ms.top()<<endl;
        ms.pop();
    }
    if (!ms.empty()) cout<<ms.top()<<endl;
    else cout<< "empty stack";

    return 0;
}