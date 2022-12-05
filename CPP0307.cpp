#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        stringstream ss2(s2);
        string token;
        set<string> se1;
        set<string> se2;
        while (ss2 >> token)
        {
            se2.insert(token);
        }
        stringstream ss1(s1);
        while (ss1 >> token)
        {
            se1.insert(token);
        }
        for (auto x : se1)
        {
            if (se2.find(x) == se2.end())
                cout << x << " ";
        }
        cout << endl;
    }
}