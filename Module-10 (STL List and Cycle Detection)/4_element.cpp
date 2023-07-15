#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {20, 30, 40, 50, 10, 50, 20, 10, 10};

    // Access first element:
    // cout << myList.front();

    // Access last element:
    // cout << myList.back();

    // Access middle element:
    cout << *next(myList.begin(), 3) << endl;
    return 0;
}