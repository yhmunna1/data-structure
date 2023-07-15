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
        Node *p = q.front();
        q.pop();

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

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
int findHeight(Node *root)
{
    if (root == NULL)
        return 0;
    else
    {
        int leftHeight = findHeight(root->left);
        int rightHeight = findHeight(root->right);
        return max(leftHeight, rightHeight) + 1;
    }
}

int countNode(Node *root)
{
    if (root == NULL)
        return 0;
    else
        return countNode(root->left) + countNode(root->right) + 1;
}
bool checkPerfect(Node *root)
{
    if (root == NULL)
        return true;

    int height = findHeight(root);
    int expectedNodes = pow(2, height) - 1;
    int actualNodes = countNode(root);

    return (actualNodes == expectedNodes);
}
int main()
{
    Node *root = input_tree();
    if (checkPerfect(root))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}