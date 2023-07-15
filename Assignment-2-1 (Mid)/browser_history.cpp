#include <bits/stdc++.h>
using namespace std;

void browserHistory(list<string> &addresses, const string &query)
{
    string command = query.substr(0, query.find(" "));
    if (command == "visit")
    {
        string address = query.substr(query.find(" ") + 1);
        auto it = find(addresses.begin(), addresses.end(), address);
        if (it != addresses.end())
        {
            cout << address << endl;
        }
        else
        {
            cout << "Not Available" << endl;
        }
    }
    else if (command == "next")
    {
        auto it = find(addresses.begin(), addresses.end(), query);
        if (it == addresses.end() || next(it) == addresses.end())
        {
            cout << "Not Available" << endl;
        }
        else
        {
            cout << *(next(it)) << endl;
        }
    }
    else if (command == "prev")
    {
        auto it = find(addresses.begin(), addresses.end(), query);
        if (it == addresses.end() || it == addresses.begin())
        {
            cout << "Not Available" << endl;
        }
        else
        {
            cout << *(prev(it)) << endl;
        }
    }
}

int main()
{
    string input;
    getline(cin, input);

    list<string> addresses;
    string address;
    size_t pos = 0;
    while ((pos = input.find(" ")) != string::npos)
    {
        address = input.substr(0, pos);
        addresses.push_back(address);
        input.erase(0, pos + 1);
    }
    addresses.push_back(input);

    int Q;
    cin >> Q;
    cin.ignore();

    for (int i = 0; i < Q; i++)
    {
        string query;
        getline(cin, query);
        browserHistory(addresses, query);
    }

    return 0;
}
