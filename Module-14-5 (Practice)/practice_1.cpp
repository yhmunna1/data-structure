#include <bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
bool compareStacks(myStack &stack1, myStack &stack2)
{
    if (stack1.size() != stack2.size())
    {
        return false;
    }

    while (!stack1.empty() && !stack2.empty())
    {
        if (stack1.top() != stack2.top())
        {
            return false;
        }
        stack1.pop();
        stack2.pop();
    }

    return stack1.empty() && stack2.empty();
}
int main()
{
    myStack st;
    int n;
    cin >> n;
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temp.push_back(x);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        st.push(temp[i]);
    }

    myStack newSt;
    int m;
    cin >> m;
    vector<int> newTemp;
    for (int i = 0; i < m; i++)
    {
        int y;
        cin >> y;
        newTemp.push_back(y);
    }
    for (int i = m - 1; i >= 0; i--)
    {
        newSt.push(newTemp[i]);
    }

    if (compareStacks(st, newSt))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}