#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for (int y : t)
    {
        cout << y << " ";
    }
    for (int x : v)
    {
        cout << x << " ";
    }
    return 0;
}

// Input:
// 2
// 1 2
// 3 4