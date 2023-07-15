#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insertNode(Node *&head, Node *&tail, int index, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        int count = 0;
        while (count < index && temp != NULL)
        {
            temp = temp->next;
            count++;
        }

        if (temp == NULL)
        {
            cout << "Invalid" << endl;
            return;
        }

        Node *prevNode = temp->prev;
        prevNode->next = newNode;
        newNode->prev = prevNode;
        newNode->next = temp;
        temp->prev = newNode;

        if (temp == head)
        {
            head = newNode;
        }
    }
}

void printLinkedListForward(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printLinkedListBackward(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;
        insertNode(head, tail, X, V);

        if (head == NULL)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            printLinkedListForward(head);
            printLinkedListBackward(tail);
        }
    }

    return 0;
}
