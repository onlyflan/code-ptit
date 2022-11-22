#include <bits/stdc++.h>
using namespace std;

struct SinhVien
{
    string msv = {"B20DCCN001"}, ten, lop, dob;
    float gpa;
};

void nhap(SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop;
    cin.ignore();
    getline(cin, a.dob);
    cin >> a.gpa;
}

void in(SinhVien &a)
{
    if (a.dob[1] == '/')
        a.dob.insert(0, "0");
    if (a.dob[4] == '/')
        a.dob.insert(3, "0");
    cout
        << a.msv << " " << a.ten << " " << a.lop << " " << a.dob << " " << fixed << setprecision(2) << a.gpa;
}

int main()
{
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}