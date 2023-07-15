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
bool checkStack(myStack &st1, myStack &st2)
{
    if (st1.size() != st2.size())
    {
        return false;
    }

    while (!st1.empty() && !st2.empty())
    {
        if (st1.top() != st2.top())
        {
            return false;
        }
        st1.pop();
        st2.pop();
    }

    return st1.empty() && st2.empty();
}
int main()
{
    myStack st;
    int n;
    cin >> n;
    myStack newSt;
    int m;
    cin >> m;
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

    if (checkStack(st, newSt))
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}