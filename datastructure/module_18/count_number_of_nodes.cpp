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

Node *treeInput()
{
    int x;
    cin >> x;
    Node *root;
    if (x == -1)
        root = NULL;
    else
        root = new Node(x);

    queue<Node *> nodeQ;
    if (root)
        nodeQ.push(root);

    while (!nodeQ.empty())
    {
        Node *frontNode = nodeQ.front();
        nodeQ.pop();

        Node *leftNode, *rightNode;
        int l, r;
        cin >> l >> r;
        if (l != -1)
            frontNode->left = new Node(l);

        if (r != -1)
            frontNode->right = new Node(r);

        if (frontNode->left) nodeQ.push(frontNode->left);
        if (frontNode->right) nodeQ.push(frontNode->right);
    }

    return root;
}

void levelTraversal(Node* root) {
    if (root == NULL) {
        cout<<"Empty Tree"<<endl;
        return;
    }

    queue<Node*> nodeQ;
    nodeQ.push(root);

    while(!nodeQ.empty()) {
        Node* frontN = nodeQ.front();
        nodeQ.pop();
        cout<<frontN->val<<" ";

        if(frontN->left) nodeQ.push(frontN->left);
        if (frontN->right) nodeQ.push(frontN->right);
    }
    cout<<endl;
}

int countNodes(Node* root) {

    if (root == NULL) return 0;

    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l+r+1;
}

int main()
{
    Node *root = treeInput();

    levelTraversal(root);

    int nodeCount = countNodes(root);
    cout<<nodeCount<<endl;

    return 0;
}