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

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        if (l != -1)
            parent->left = new Node(l);
        if (r != -1)
            parent->right = new Node(r);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }

    return root;
}

void printLevel(Node *root)
{
    if (root == NULL)
    {
        cout << "Empty Tree" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *parent = q.front();
        q.pop();
        cout << parent->val << " ";

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
    cout << endl;
}

bool searchValue(Node *root, int x)
{
    if (root == NULL)
        return false;

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {

        Node *parent = q.front();
        q.pop();
        if (parent->val == x)
            return true;
        if (x < parent->val)
        {
            if (parent->left)
                q.push(parent->left);
            else
                return false;
        }
        else
        {
            if (parent->right)
                q.push(parent->right);
            else
                return false;
        }
    }
    return false;
}

int main()
{
    Node *root = treeInput();
    printLevel(root);

    bool ans = searchValue(root, 10);
    if (ans)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
    return 0;
}