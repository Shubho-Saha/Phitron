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
    myQueue mq;
    int n, v;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>v;
        mq.push(v);
    }

    cout<<mq.size()<<endl;
    cout<<mq.front()<<endl;
    cout<<mq.empty()<<endl;

    while(!mq.empty()) {
        cout<<mq.front()<<endl;
        mq.pop();
    }
    mq.pop();
    cout<<mq.front()<<endl;

    return 0;
}