#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin, s);
        vector<string> v;
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
        }
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
        {
            tmp[0] = toupper(tmp[0]);
            v.push_back(tmp);
        }
        if (n == 1)
        {
            cout << v[v.size() - 1] << " ";
            for (int i = 0; i < v.size() - 1; i++)
            {
                cout << v[i] << " ";
            }
        }
        else
        {
            for (int i = 1; i < v.size(); i++)
            {
                cout << v[i] << " ";
            }
            cout << v[0];
        }
        cout << endl;
    }
}
