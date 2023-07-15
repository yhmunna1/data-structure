#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *tail = head;
        tail->next = newNode;
        tail = newNode;
    }
}

void print_head_tail(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    Node *tail = head;
    int x = tail->val;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    int v = tail->val;
    cout << x << " " << v << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_head(head, V);
        }
        else if (X == 1)
        {
            insert_tail(head, V);
        }
        if (i != Q - 1)
        {
            print_head_tail(head);
        }
        else
        {
            print_head_tail(head);
        }
    }

    return 0;
}
