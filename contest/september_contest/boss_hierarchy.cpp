#include <bits/stdc++.h>
#define ll long long int
#define fast() ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

class Node
{
public:
    ll val;
    Node *left, *right;
    Node(ll val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

Node *array2Bst(vector<ll> &vec, ll l, ll r)
{
    if (l > r)
        return NULL;

    ll mid = (l+r) / 2;
    Node *root = new Node(vec[mid]);

    root->left = array2Bst(vec, l, mid - 1);
    root->right = array2Bst(vec, mid + 1, r);

    return root;
}

void printBst(Node *root)
{
    if (root == NULL)
        return;

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
int main()
{
    fast();
    ll n;
    cin >> n;
    ll x = pow(2, n) - 1;

    vector<ll> employee(x);
    for (ll i = 0; i < x; i++)
    {
        cin >> employee[i];
    }

    Node *root = array2Bst(employee, 0, x - 1);
    printBst(root);

    return 0;
}