
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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_middle(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty." << endl;
        return;
    }

    Node *slowPtr = head;
    Node *fastPtr = head;
    Node *prevPtr = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL)
    {
        fastPtr = fastPtr->next->next;
        prevPtr = slowPtr;
        slowPtr = slowPtr->next;
    }

    if (fastPtr == NULL)
    {
        // Even number of nodes
        cout << prevPtr->val << " " << slowPtr->val << endl;
    }
    else
    {
        // Odd number of nodes
        cout << slowPtr->val << endl;
    }
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_middle(head);
    return 0;
}