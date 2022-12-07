#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt = 0;

class SinhVien
{
private:
    string msv, ten, lop, email;

public:
    friend istream &operator>>(istream &in, SinhVien &a)
    {
        scanf("\n");
        getline(in, a.msv);
        getline(in, a.ten);
        getline(in, a.lop);
        getline(in, a.email);
        return in;
    }
    friend ostream &operator<<(ostream &out, SinhVien a)
    {
        out << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
        return out;
    }
    string getLop()
    {
        return this->lop;
    }
    string getMsv()
    {
        return this->msv;
    }
};

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        for (int i = 0; i < s.size(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        stringstream ss(s);
        string token;
        vector<char> v;
        while (ss >> token)
        {
            v.push_back(token[0]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i].getLop()[0] == 'E' && (a[i].getMsv()[5] == 'A' || a[i].getMsv()[5] == 'C'))
                continue;
            if (a[i].getMsv()[5] == v[0] && a[i].getMsv()[6] == v[1])
                cout << a[i];
        }
    }
    return 0;
}