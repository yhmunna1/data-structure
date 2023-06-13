#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;

    vector<int> ans(26, 0);

    for (char c : S)
    {
        ans[c - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (ans[i] > 0)
        {
            char letter = i + 'a';
            cout << letter << " : " << ans[i] << endl;
        }
    }

    return 0;
}