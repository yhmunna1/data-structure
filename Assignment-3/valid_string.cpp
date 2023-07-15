#include <bits/stdc++.h>
using namespace std;

bool checkValid(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (!st.empty() && st.top() != c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }

    return st.empty();
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (checkValid(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}