#include <bits/stdc++.h>
using namespace std;

int main()
{
    // System 1
    // vector<int> v = {10, 20, 30, 40, 10, 20, 10};
    // vector<int>::iterator it;
    // it = find(v.begin(), v.end(), 10);
    // cout << *it;

    // // System 2
    vector<int> t = {10, 20, 30, 40, 10, 20, 10};
    auto it = find(t.begin(), t.end(), 70);
    if (it == t.end())
        cout << "Not Found";
    else
        cout << "Found";
    return 0;
}