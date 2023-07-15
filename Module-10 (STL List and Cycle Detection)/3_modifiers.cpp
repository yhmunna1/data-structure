#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> mylist = {10, 20, 30};

    // Insert at Tail (push_back):
    mylist.push_back(100);

    // Insert at Head (push_front):
    mylist.push_front(200);

    // Delete tail (pop_back):
    mylist.pop_back();

    // Delete head (pop_front):
    mylist.pop_front();

    // Insert Single (Anywhere):
    mylist.insert(next(mylist.begin(), 2), 500);

    // Insert Multiple (Anywhere):
    mylist.insert(next(mylist.begin(), 3), {500, 600, 700});

    // Insert from vector (Anywhere):
    vector<int> v = {12, 13, 14};
    mylist.insert(next(mylist.begin(), 5), v.begin(), v.end());

    // Delete Single:
    // mylist.erase(next(mylist.begin(), 6));

    // Delete Multiple:
    // mylist.erase(next(mylist.begin(), 2), 5);

    // Replace (I'm replacing all 500 to 15):
    replace(mylist.begin(), mylist.end(), 500, 15);

    // Find (I'm finding 10):
    auto it = find(mylist.begin(), mylist.end(), 10);
    if (it == mylist.end())
    {
        cout << "Not Found: " << *it << endl;
    }
    else
    {
        cout << "Found: " << *it << endl;
    }

    // Output:
    for (int val : mylist)
    {
        cout << val << endl;
    }
    return 0;
}