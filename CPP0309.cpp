#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        stringstream ss(s);
        string temp;
        multiset<string> ms;
        while (ss >> temp)
        {
            ms.insert(temp);
        }
        cout << ms.size() << endl;
    }
}