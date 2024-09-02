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

Node *arrayToBst(int *arr, int l, int r)
{
    if (l > r) 
        return NULL;
    int mid = (l+r)/2;
    Node *root = new Node(arr[mid]);
    Node *leftroot = arrayToBst(arr, l, mid-1);
    Node *rightroot = arrayToBst(arr, mid+1, r);
    root->left = leftroot;
    root->right = rightroot;
    return root;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    Node *root = arrayToBst(arr, 0, n-1);
    printLevel(root);
    return 0;
}