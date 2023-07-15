#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> mylist(10, 5);

    // list<int> list2 = {1, 2, 3, 4, 5};
    // list<int> mylist(list2);

    // int a[5] = {10, 20, 30, 40, 50};
    // list<int> mylist(a, a + 5);

    vector<int> v = {100, 200, 300, 400, 500};
    list<int> mylist(v.begin(), v.end());

    // Output Check -1
    // for (auto it = mylist.begin(); it != mylist.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // Output Check -2 (Most uses)
    for (int val : mylist)
    {
        cout << val << endl;
    }
    return 0;
}