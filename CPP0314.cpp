#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    set<string> s;
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin,a);
        s.insert(a);
    }
    cout<<s.size();
}
