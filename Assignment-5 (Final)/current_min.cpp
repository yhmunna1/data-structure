#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int num : a)
    {
        pq.push(num);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int com;
        cin >> com;

        if (com == 0)
        {
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        else if (com == 1)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
        }
        else if (com == 2)
        {
            if (pq.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                pq.pop();
                if (pq.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << pq.top() << endl;
                }
            }
        }
    }

    return 0;
}
