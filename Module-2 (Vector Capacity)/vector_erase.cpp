#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Single value erase
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 3);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Multiple value erase
    vector<int> t = {10, 20, 30, 40, 50, 60, 70};
    t.erase(t.begin() + 2, t.begin() + 6);
    for (int y : t)
    {
        cout << y << " ";
    }

    return 0;
}