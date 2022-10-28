// Xóa từ trong xâu

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    string token;
    cin >> word;
    while (ss >> token)
    {
        if (word != token)
        {
            cout << token << " ";
        }
        /* code */
    }
}