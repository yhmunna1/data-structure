#include <bits/stdc++.h>
using namespace std;

bool checkSame(stack<int> &st, queue<int> &q)
{
    if (st.size() != q.size())
    {
        return false;
    }

    while (!st.empty())
    {
        if (st.top() != q.front())
        {
            return false;
        }
        st.pop();
        q.pop();
    }

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

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
        q.push(val);
    }

    if (checkSame(st, q))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}