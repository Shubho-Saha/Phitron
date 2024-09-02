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

void insertBst(Node *&root, int val)
{
    if (root == NULL)
    {
        root = new Node(val);
        return;
    }

    if (val > root->val)
    {
        if (root->right == NULL)
            root->right = new Node(val);
        else
            insertBst(root->right, val);
    }
    else if (val < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(val);
        else
            insertBst(root->left, val);
    }
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
    Node *root = NULL;
    insertBst(root, 50);
    insertBst(root, 20);
    insertBst(root, 80);
    insertBst(root, 40);
    insertBst(root, 70);
    insertBst(root, 60);
    insertBst(root, 90);
    insertBst(root, 10);

    printLevel(root);
    if(searchValue(root, 90))
        cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;
    return 0;
}