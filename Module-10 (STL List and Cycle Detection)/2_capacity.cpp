#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> list1 = {1, 2, 3, 4, 5};
    // cout << list1.max_size();
    // list1.clear();
    list1.resize(2);
    list1.resize(5, 100);

    for (int val : list1)
    {
        cout << val << endl;
    }

    return 0;
}