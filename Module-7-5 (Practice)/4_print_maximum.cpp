
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
int find_max(Node *head)
{
    int maxValue = INT_MIN;

    Node *current = head;
    while (current != NULL)
    {
        if (current->val > maxValue)
        {
            maxValue = current->val;
        }
        current = current->next;
    }

    return maxValue;
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
    int maxVal = find_max(head);
    cout << maxVal << endl;
    return 0;
}