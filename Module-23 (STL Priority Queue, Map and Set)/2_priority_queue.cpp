#include <bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq; // Max heap
    priority_queue<int, vector<int>, greater<int>> pq; // Min Heap
    while (true)
    {
        int c;
        cin >> c;
        if (c == 0)
        {
            int x;
            cin >> x;
            pq.push(x); // O(logN)
        }
        else if (c == 1)
        {
            pq.pop(); // O(logN)
        }
        else if (c == 2)
        {
            cout << pq.top() << endl; // O(1)
        }
        else
        {
            break;
        }
    }
    return 0;
}

// Input:
// 0 10
// 0 20
// 0 5
// 2
// 1
// 2
// 3