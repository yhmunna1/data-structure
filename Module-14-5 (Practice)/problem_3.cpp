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
    while (st.empty() == false)
    {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}