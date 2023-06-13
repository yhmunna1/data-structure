#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Push_back (Add one from last/right side)
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // v.clear();
    cout << "Capacity after clear: " << v.capacity() << endl;
    cout << "Size after clear: " << v.size() << endl;
    cout << "V1 After clear: " << v[1] << endl;

    // After Resize:
    v.resize(2);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.resize(7, 100);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}