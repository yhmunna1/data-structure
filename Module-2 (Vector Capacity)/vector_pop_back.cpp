#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x = {10, 20, 30, 40};
    vector<int> v = {40, 50, 60};
    v = x;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Pop_Back (Delete one from last)
    vector<int> z = {40, 50, 60, 70, 80, 90, 100, 110};
    z.pop_back();
    z.pop_back();

    for (int i = 0; i < z.size(); i++)
    {
        cout << z[i] << " ";
    }

    return 0;
}