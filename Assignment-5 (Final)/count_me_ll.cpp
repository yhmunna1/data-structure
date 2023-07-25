#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        unordered_map<int, int> feqMap;
        int num;
        int maxCount = 0;
        int maxNum = INT_MIN;

        for (int i = 0; i < N; ++i)
        {
            cin >> num;
            feqMap[num]++;
            if (feqMap[num] > maxCount || (feqMap[num] == maxCount && num > maxNum))
            {
                maxCount = feqMap[num];
                maxNum = num;
            }
        }

        cout << maxNum << " " << maxCount << "\n";
    }

    return 0;
}
