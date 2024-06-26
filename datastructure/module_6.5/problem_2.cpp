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
    if (head == NULL) {
        cout<<endl<<"Empty Linked List"<<endl<<endl;
        return;
    }
    Node *temp = head;
    cout<<endl;
    cout<<"Your Linked List: ";
    while (temp != NULL) {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl<<endl;

}

bool duplicate(Node *head) {
    if (head == NULL) return 0;
    Node *temp = head;
    int arr[100];
    int i=0;

    while (temp != NULL) {
        arr[i] = temp->val;
        temp = temp->next;
        i++;
    }
    sort(arr, arr+i);
    int flag = 0;
    for(int j=0; j<i-1; j++){
        if (arr[j] == arr[j+1]) {
            flag = 1;
            break;
        }
    }

    return flag;

    
}

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
    Node *head = NULL;
    cout<<"Enter values: ";
    while (true) {
        int v;
        cin>>v;
        if (v== -1) break;
        push(head, v);

    }
    print(head);

    if (duplicate(head)) cout<<"YES";
    else cout<<"NO";
    

    return 0;
}