#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node *next;
    Node *prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myQueue
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
        tail = newNode;
    }

    void pop() {
        sz--;
        if (head == NULL) return;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            tail = NULL;
            return;
        }

        Node *dltNode = head;
        head = head->next;
        head->prev = NULL;
        delete dltNode;
    }

    int size() {
        return sz;
    }

    int front() {
        return head->val;
    }

    bool empty() {
        if (sz == 0) return true;
        return false;
    }
};
int main()
{
    myQueue m;
    int n, v;
    cin>>n;

    for(int i=0; i<n; i++) {
        cin>>v;
        m.push(v);
    }

    cout<<"size: "<<m.size()<<endl;
    if (m.empty()) {
        cout<<"Queue empty"<<endl;
    } else {
        cout<<"Queue not empty"<<endl;
    }
    cout<<"front value: "<<m.front()<<endl;

    while (!m.empty()) {
        cout<<m.front()<<endl;
        m.pop();
    }

    cout<<"size: "<<m.size()<<endl;
    

    return 0;
}