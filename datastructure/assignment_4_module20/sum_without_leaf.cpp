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

int sumLeaf(Node* root)
{
    int sum = 0;
    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        if (parent->left || parent->right)
        {
            sum += parent->val;
        }

        if (parent->left) q.push(parent->left);
        if (parent->right) q.push(parent->right);
    }

    return sum;
}

int main()
{
    Node *root = treeInput();
    int ans = sumLeaf(root);
    cout<<ans;

    return 0;
}