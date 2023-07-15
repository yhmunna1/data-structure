#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {20, 30, 40, 50, 10, 50, 20, 10, 10};

    // Remove (Remove all 10):
    // myList.remove(10);

    // Sort:
    // myList.sort();

    // Sort Reverse:
    // myList.sort(greater<int>());

    // Unique (Remove same value, but need to sort first)
    // myList.unique();

    // Print reverse:
    myList.reverse();

    // Output:
    for (int val : myList)
    {
        cout << val << endl;
    }
    return 0;
}