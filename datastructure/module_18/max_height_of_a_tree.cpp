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
        Node *fnode = nodeQ.front();
        nodeQ.pop();

        Node *leftN, *rightN;
        int l, r;
        cin >> l >> r;

        if (l != -1)
            fnode->left = new Node(l);
        if (r != -1)
            fnode->right = new Node(r);
        if (fnode->left)
            nodeQ.push(fnode->left);
        if (fnode->right)
            nodeQ.push(fnode->right);
    }

    return root;
}

void levelOrderPrint(Node *root)
{
    if (root == NULL)
    {
        cout << "Empty Tree" << endl;
        return;
    }

    queue<Node *> nodeQ;
    nodeQ.push(root);

    while (!nodeQ.empty())
    {
        Node *fnode = nodeQ.front();
        nodeQ.pop();
        cout << fnode->val << " ";

        if (fnode->left)
            nodeQ.push(fnode->left);
        if (fnode->right)
            nodeQ.push(fnode->right);
    }
    cout<<endl;
}

int countLeaf(Node* root) 
{
    if (root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;

    int l = countLeaf(root->left);
    int r = countLeaf(root->right);
    return l+r;
}

int countNodes(Node* root)
{
    if (root == NULL) return 0;

    int l = countNodes(root->left);
    int r = countNodes(root->right);
    return l+r+1;
}

int heightOfTree(Node* root)
{
    if (root == NULL) return 0;

    int l = heightOfTree(root->left);
    int r = heightOfTree(root->right);
    return max(l, r) + 1;
}

int main()
{
    Node* root = treeInput();
    levelOrderPrint(root);

    int cnt = countLeaf(root);
    cout<<cnt<<endl;

    int nodeCount = countNodes(root);
    cout<<nodeCount<<endl;

    int height = heightOfTree(root);
    cout<<height<<endl;
    return 0;
}