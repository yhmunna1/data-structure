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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}
void print_middle(Node *&head)
{
    Node *midTop = head;
    Node *other = head;
    Node *midLow = NULL;

    while (other != NULL && other->next != NULL)
    {
        other = other->next->next;
        midLow = midTop;
        midTop = midTop->next;
    }

    if (other == NULL)
    {
        cout << midTop->val << " " << midLow->val << endl;
    }
    else
    {
        cout << midTop->val << endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    if (head != NULL)
    {
        for (Node *i = head; i->next != NULL; i = i->next)
        {
            for (Node *j = i->next; j != NULL; j = j->next)
            {
                if (i->val > j->val)
                {
                    swap(i->val, j->val);
                }
            }
        }
    }

    print_middle(head);

    return 0;
}