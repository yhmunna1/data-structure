#include <bits/stdc++.h>
using namespace std;

int main()
{
    int Q;
    cin >> Q;

    queue<string> line;

    while (Q--)
    {
        int command;
        cin >> command;

        if (command == 0)
        {
            string name;
            cin >> name;
            line.push(name);
        }
        else if (command == 1)
        {
            if (!line.empty())
            {
                cout << line.front() << endl;
                line.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
    }

    return 0;
}
