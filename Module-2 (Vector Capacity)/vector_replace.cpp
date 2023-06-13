#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Replace all 10 to 5.
    vector<int> v = {10, 20, 30, 40, 10, 20, 10};
    replace(v.begin(), v.end(), 10, 5);
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Replace all 10 to 5 without last one 10
    vector<int> t = {10, 20, 30, 40, 10, 20, 10};
    replace(t.begin(), t.end() - 1, 10, 5);
    for (int z : t)
    {
        cout << z << " ";
    }
    return 0;
}