#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class Stack
{
public:
    Node *top;
    int size;
    Stack()
    {
        top = nullptr;
        size = 0;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            return;
        }
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getTop()
    {
        if (isEmpty())
        {
            return -1;
        }
        return top->data;
    }
};

class Queue
{
public:
    Node *front;
    Node *rear;
    int size;
    Queue()
    {
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    void enqueue(int val)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            front = newNode;
            rear = newNode;
        }
        else
        {
            rear->next = newNode;
            rear = newNode;
        }
        size++;
    }

    void dequeue()
    {
        if (isEmpty())
            return;

        Node *temp = front;
        front = front->next;
        delete temp;
        size--;
        if (isEmpty())
        {
            rear = nullptr;
        }
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return (size == 0);
    }

    int getFront()
    {
        if (isEmpty())
        {
            return -1;
        }
        return front->data;
    }
};

bool checkStackAndQueue(Stack &st, Queue &q)
{
    if (st.getSize() != q.getSize())
    {
        return false;
    }

    while (!st.isEmpty() && !q.isEmpty())
    {
        if (st.getTop() != q.getFront())
        {
            return false;
        }
        st.pop();
        q.dequeue();
    }

    return st.isEmpty() && q.isEmpty();
}

int main()
{
    Stack st;
    Queue q;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.enqueue(val);
    }

    if (checkStackAndQueue(st, q))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
