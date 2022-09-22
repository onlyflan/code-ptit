#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        string s;
        cin>>s;
        int n=s.length();
        if(s[n-1]=='6' && s[n-2]=='8') cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
	}
}
