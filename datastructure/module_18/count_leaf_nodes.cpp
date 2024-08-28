#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* treeInput()
{
    int x;
    cin>>x;
    Node* root;
    if (x == -1) root = NULL;
    else root = new Node(x);

    queue<Node*> nodeQ;
    if (root) nodeQ.push(root);

    while(!nodeQ.empty()) {
        Node* fNode = nodeQ.front();
        nodeQ.pop();
        Node *leftN, *rightN;
        int l, r;
        cin>>l>>r;

        if (l != -1)
            fNode->left = new Node(l);
        if (r != -1)
            fNode->right = new Node(r);
        
        if (fNode->left) nodeQ.push(fNode->left);
        if (fNode->right) nodeQ.push(fNode->right);
    }

    return root;
}

void levelTraversal(Node* root)
{
    if (root == NULL){
        cout<<"Empty Tree"<<endl;
        return;
    }

    queue<Node*> nodeQ;
    nodeQ.push(root);

    while(!nodeQ.empty()) {
        Node* fnode = nodeQ.front();
        nodeQ.pop();
        cout<<fnode->val<<" ";

        if (fnode->left) nodeQ.push(fnode->left);
        if (fnode->right) nodeQ.push(fnode->right);
    }
    cout<<endl;
}

int countLeaf(Node* root)
{
    if (root == NULL) return 0;

    if (root->left == NULL && root->right == NULL) return 1;

    int l = countLeaf(root->left);
    int r = countLeaf(root->right);
    return l + r;
}

int main()
{
    Node* root = treeInput();
    levelTraversal(root);

    int cnt = countLeaf(root);
    cout<<cnt<<endl;

    return 0;
}