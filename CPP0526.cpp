#include <bits/stdc++.h>
using namespace std;

struct Tuoi
{
    string ten, ns;
    int day, month, year;
};

void nhap(Tuoi &a)
{
    cin >> a.ten >> a.ns;
    a.day = stoi(a.ns.substr(0, 2));
    a.month = stoi(a.ns.substr(3, 2));
    a.year = stoi(a.ns.substr(6));
}

bool cmp(Tuoi a, Tuoi b)
{
    if (a.year != b.year)
        return a.year < b.year;
    if (a.month != b.month)
        return a.month < b.month;
    return a.day < b.day;
}

void in(Tuoi a[], int n)
{
    sort(a, a + n, cmp);
    cout << a[n - 1].ten << endl
         << a[0].ten;
}

int main()
{
    int n;
    cin >> n;
    Tuoi a[n];
    for (int i = 0; i < n; i++)
    {
        nhap(a[i]);
    }
    in(a, n);
}