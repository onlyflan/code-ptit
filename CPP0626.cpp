#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int cnt = 0;
class GiangVien
{
private:
    string id, name, subject;

public:
    friend istream &operator>>(istream &in, GiangVien &a)
    {
        ++cnt;
        if (cnt < 10)
            a.id = "GV0" + to_string(cnt);
        else
            a.id = "GV" + to_string(cnt);
        getline(in, a.name);
        getline(cin, a.subject);
        string res = "";
        stringstream ss(a.subject);
        string tmp;
        while (ss >> tmp)
        {
            res += toupper(tmp[0]);
        }
        a.subject = res;
        return in;
    }
    friend ostream &operator<<(ostream &out, GiangVien a)
    {
        out << a.id << " " << a.name << " " << a.subject << endl;
        return out;
    }
    string getName()
    {
        return this->name;
    }
    string getSubject()
    {
        return this->subject;
    }
};

int main()
{
    int n;
    cin >> n;
    GiangVien a[n];
    cin.ignore();
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
        stringstream ss(s);
        string token;
        string check = "";
        while (ss >> token)
        {
            check += toupper(token[0]);
        }
        cout << "DANH SACH GIANG VIEN BO MON " << check << ":\n";
        for (int i = 0; i < n; i++)
        {
            if (check == a[i].getSubject())
                cout << a[i];
        }
    }
    return 0;
}