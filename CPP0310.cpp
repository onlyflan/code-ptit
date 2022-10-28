#include <bits/stdc++.h>
using namespace std;

long long maxSum(string s1, string s2)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '5')
            s1[i] = '6';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '5')
            s2[i] = '6';
    }
    long long Max = stoll(s1) + stoll(s2);
    return Max;
}

long long minSum(string s1, string s2)
{
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '6')
            s1[i] = '5';
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '6')
            s2[i] = '5';
    }
    long long Max = stoll(s1) + stoll(s2);
    return Max;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << minSum(s1, s2) << " " << maxSum(s1, s2) << endl;
    }
}