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

void levelPrint(Node *root, int lv)
{
    bool flag = false;
    queue<pair<Node *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();
        Node *node = parent.first;
        int level = parent.second;

        if (level == lv)
        {
            cout << node->val << " ";
            flag = true;
        }

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }
    if (flag == false) cout<<"Invalid";
}

int main()
{
    Node *root = treeInput();
    int x;
    cin >> x;

    levelPrint(root, x);

    return 0;
}