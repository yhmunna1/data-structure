#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    // For last value
    cout << v[v.size() - 1] << endl;
    cout << v.back() << endl;

    // For first value
    cout << v[0] << endl;
    cout << v.front() << endl;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}