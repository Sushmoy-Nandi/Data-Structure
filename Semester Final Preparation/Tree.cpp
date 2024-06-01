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
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->val << " ";
    inOrder(root->right);
}
void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preOrder(root->left);
    preOrder(root->right);
}
void postOrder(Node *root)
{
    if (root == NULL)
        return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val << " ";
}
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        Node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int main()
{
    Node *root = input_tree();
    // Node *root = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *d = new Node(50);
    // Node *e = new Node(60);
    // Node *f = new Node(70);
    // Node *g = new Node(80);
    // Node *h = new Node(90);
    // Node *i = new Node(100);
    // Node *j = new Node(200);
    // Node *k = new Node(300);
    // Node *l = new Node(400);
    // root->left = a;
    // root->right = b;
    // a->left = c;
    // a->right = d;
    // b->left = e;
    // b->right = f;
    // c->left = g;
    // c->right = h;
    // d->left = i;
    // e->left = j;
    // e->right = k;
    // f->right = l;

    // inOrder(root);
    //preOrder(root);
    postOrder(root);

    return 0;
}