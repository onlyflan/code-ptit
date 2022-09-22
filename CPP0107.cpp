#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin>>t;
    while(t--){
        string s;
        getline(cin,s);
        double diem=10;
        string a="101 A B B A D C C A B D C C A B D";
        string b="102 A C C A B C D D B B C D D B B";
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]!=a[i]) diem-=10/15;
            cout<<s[i]<<" ";
            /* code */
        }
        cout<<"\n";
        cout<<setprecision(2)<<fixed<<diem<<" "<<s[4];
    }
}
