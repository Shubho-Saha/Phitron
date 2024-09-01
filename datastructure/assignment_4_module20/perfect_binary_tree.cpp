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

int heightOfTree(Node* root)
{
    if (root == NULL) return 0;

    int l = heightOfTree(root->left);
    int r = heightOfTree(root->right);
    return max(l, r) + 1;
}

int nodeCount(Node *root)
{
    if (root == NULL) return 0;
    int l = nodeCount(root->left);
    int r = nodeCount(root->right);
    return l+r+1;
}

int main()
{
    Node *root = treeInput();
    int n = nodeCount(root);
    int d = heightOfTree(root);

    n == pow(2, d) - 1 ? cout<<"YES" : cout<<"NO";

    return 0;
}