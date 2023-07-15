#include <bits/stdc++.h>
using namespace std;

char colorMix(char col1, char col2)
{
    if (col1 == 'R')
    {
        if (col2 == 'B')
            return 'P';
        if (col2 == 'G')
            return 'Y';
    }
    if (col1 == 'B')
    {
        if (col2 == 'R')
            return 'P';
        if (col2 == 'G')
            return 'C';
    }
    if (col1 == 'G')
    {
        if (col2 == 'R')
            return 'Y';
        if (col2 == 'B')
            return 'C';
    }
    return ' ';
}

string outputColor(string colors)
{
    stack<char> st;

    for (char color : colors)
    {
        if (!st.empty() && st.top() == color)
        {
            st.pop();
        }
        else
        {
            if (!st.empty())
            {
                char mixedColor = colorMix(st.top(), color);
                if (mixedColor != ' ')
                {
                    st.pop();
                    st.push(mixedColor);
                }
                else
                {
                    st.push(color);
                }
            }
            else
            {
                st.push(color);
            }
        }
    }

    string result = "";
    while (!st.empty())
    {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string colors;
        cin >> colors;

        string finalColor = outputColor(colors);
        cout << finalColor << endl;
    }

    return 0;
}
