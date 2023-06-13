#include <bits/stdc++.h>
using namespace std;

int main()
{
    // For only one value:
    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() + 2, 10);
    // Range Based For Loop (Copy value in new int)
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Add new vector inside the old vector:
    vector<int> s = {1, 2, 3, 4, 5};
    vector<int> t = {10, 20, 30, 40, 50};
    s.insert(s.begin() + 2, t.begin(), t.end());
    // Range Based For Loop (Copy value in new int)
    for (int y : s)
    {
        cout << y << " ";
    }

    return 0;
}