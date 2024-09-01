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

void leafNode(Node *root)
{
    queue<Node*> q;
    vector<int> v;
    q.push(root);

    while(!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        if (parent->left == NULL && parent->right == NULL)
        {
            v.push_back(parent->val);
        }

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }

    sort(v.begin(), v.end(), greater<int>());
    for(int x: v) {
        cout<<x<<" ";
    }
}

int main()
{
    Node *root = treeInput();
    leafNode(root);

    return 0;
}