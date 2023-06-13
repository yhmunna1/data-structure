#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; //Type-1(Without size and value)

    // vector<int> v(5);     // Type-2(Without size)

    // vector<int> v(5, 10); // Type-3(With size and value)

    // Type-4 (Copy size and value)
    // vector<int> v2(5, 50);
    // vector<int> v(v2);

    // Type-5 (Copy size and value from an array)
    // int a[6] = {1, 2, 3, 4, 5, 6};
    // vector<int> v(a, a + 6);

    // Type-6 (Value init)
    vector<int> v = {2, 3, 4};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << v.size() << endl;
    return 0;
}