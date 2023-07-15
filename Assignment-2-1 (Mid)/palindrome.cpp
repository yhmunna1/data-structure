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

bool isPalindrome(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }

    stack<int> st;
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        st.push(slow->val);
        slow = slow->next;
        fast = fast->next->next;
    }

    if (fast != NULL)
    {
        slow = slow->next;
    }

    while (slow != NULL)
    {
        int top = st.top();
        st.pop();
        if (slow->val != top)
        {
            return false;
        }
        slow = slow->next;
    }

    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    cin >> val;
    if (val != -1)
    {
        insert_tail(head, tail, val);
        while (cin >> val && val != -1)
        {
            insert_tail(head, tail, val);
        }
    }

    if (isPalindrome(head))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
