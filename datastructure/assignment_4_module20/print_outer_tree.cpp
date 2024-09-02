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

void leftOuter(Node *root)
{
    if (root->left) {
        leftOuter(root->left);
    } else if (root->right) {
        leftOuter(root->right);
    }
    cout<<root->val<<" ";
}

void rightOuter(Node *root)
{
    cout << root->val << " ";
    if (root->right)
    {
        rightOuter(root->right);
    }
    else if (root->left)
    {
        rightOuter(root->left);
    }
}

int main()
{
    Node *root = treeInput();
    if (!root->left && !root->right)
    {
        cout << root->val;
        return 0;
    }

    if (root->right == NULL)
    {
        leftOuter(root);
    }

    if (root->left == NULL)
    {
        // cout << root->val << " ";
        rightOuter(root);
    }

    if (root->left && root->right)
    {
        leftOuter(root);
        rightOuter(root->right);
    }
    return 0;
}