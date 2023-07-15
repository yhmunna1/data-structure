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
int main()
{
    list<int> myList;
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        myList.push_back(value);
    }
    myList.sort();
    myList.unique();
    for (int val : myList)
    {
        cout << val << " ";
    }
    return 0;
}