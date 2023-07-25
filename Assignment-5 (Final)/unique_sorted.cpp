#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());

        auto last = unique(a.begin(), a.end());
        a.erase(last, a.end());

        for (int i = 0; i < a.size(); i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}