#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < (n + 1) / 2 - 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "\\";
        for (int j = 0; j < (n - 2) - 2 * i; j++)
        {
            cout << " ";
        }
        cout << "/" << endl;
    }
    for (int i = 0; i < (n - 1) / 2; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    for (int i = (n - 1) / 2 - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << "/";
        for (int j = 0; j < (n - 2) - 2 * i; j++)
        {
            cout << " ";
        }
        cout << "\\" << endl;
    }
    return 0;
}

// Input:
// 5