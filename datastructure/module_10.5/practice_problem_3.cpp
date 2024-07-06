#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void push(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

bool isPalindrome(Node *head, Node *tail) {
    if (head == NULL || head->next == NULL) {
        cout<<"Palidrome";
        return true;
    } 

    Node *left = head;
    Node *right = tail;
    bool flag = true;
    while (left->prev != right) {
        if (left->val != right->val) {
            flag = false;
            break;
        }
        left = left->next;
        right = right->prev;
        if (left == right) break;
    }
    if (flag ) {
        cout<<"Palindrome";
    } else {
        cout<<"Not Palindrome";
    }
    return flag;
    
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (true) {
        cin>>v;
        if (v == -1) break;
        push(head, tail, v);
    }

    isPalindrome(head, tail);
    return 0;
}