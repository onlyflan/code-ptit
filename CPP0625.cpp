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
    string getId()
    {
        return this->id;
    }
};

bool cmp(GiangVien a, GiangVien b)
{
    vector<string> v1;
    stringstream ss1(a.getName());
    string token1;
    while (ss1 >> token1)
    {
        v1.push_back(token1);
    }
    string tenA = v1[v1.size() - 1];
    vector<string> v2;
    stringstream ss2(b.getName());
    string token2;
    while (ss2 >> token2)
    {
        v2.push_back(token2);
    }
    string tenB = v2[v2.size() - 1];
    if (tenA != tenB)
        return tenA < tenB;
    return a.getId() < b.getId();
}

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
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}