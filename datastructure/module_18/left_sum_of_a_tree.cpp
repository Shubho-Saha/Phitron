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
        Node *fNode = nodeQ.front();
        nodeQ.pop();
        Node *leftN, *rightN;
        int l, r;
        cin >> l >> r;

        if (l != -1)
            fNode->left = new Node(l);
        if (r != -1)
            fNode->right = new Node(r);

        if (fNode->left)
            nodeQ.push(fNode->left);
        if (fNode->right)
            nodeQ.push(fNode->right);
    }

    return root;
}

int leftSum(Node *root)
{
    if (root == NULL)
        return 0;
    int l = 0;
    if (root->left)
        l = root->left->val + leftSum(root->left);
    int r = 0;
    r = leftSum(root->right);
    return l + r;
}

int leftSumByIteration(Node *root)
{
    if (root == NULL) return 0;
    queue<Node*> q;
    q.push(root);
    int sum = 0;

    while(!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        if(parent->left) {
            sum += parent->left->val;
            q.push(parent->left);
        }
        if (parent->right) q.push(parent->right);
    }

    return sum;
}

int main()
{
    Node *root = treeInput();
    int sum = leftSum(root);
    cout<<sum<<endl;

    int x = leftSumByIteration(root);
    cout<<x<<endl;
    return 0;
}