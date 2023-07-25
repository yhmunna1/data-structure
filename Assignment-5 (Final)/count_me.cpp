#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string S;
        getline(cin, S);

        unordered_map<string, int> feqMap;
        istringstream ss(S);
        string word;
        int maxCount = 0;
        string maxWord;

        while (ss >> word)
        {
            feqMap[word]++;
            if (feqMap[word] > maxCount)
            {
                maxCount = feqMap[word];
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCount << "\n";
    }

    return 0;
}
