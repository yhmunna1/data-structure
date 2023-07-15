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
void removeDuplicates(Node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return;
    }

    auto uniqueValues = set<int>();
    Node *prev = head;
    Node *curr = head->next;

    uniqueValues.insert(prev->val);

    while (curr != NULL)
    {
        if (uniqueValues.count(curr->val) > 0)
        {
            prev->next = curr->next;
            delete curr;
            curr = prev->next;
        }
        else
        {
            uniqueValues.insert(curr->val);
            prev = curr;
            curr = curr->next;
        }
    }
}
void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
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
    removeDuplicates(head);
    printList(head);
    return 0;
}