#include <bits/stdc++.h>
using namespace std;

struct ThiSinh
{
    string name;
    string dob;
    float m1, m2, m3, sum;
};

void nhap(ThiSinh &A)
{
    getline(cin, A.name);
    getline(cin, A.dob);
    cin >> A.m1 >> A.m2 >> A.m3;
    A.sum = A.m1 + A.m2 + A.m3;
}

void in(ThiSinh &A)
{
    cout << A.name << " " << A.dob << " " << fixed << setprecision(1) << A.sum;
}

int main()
{
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}