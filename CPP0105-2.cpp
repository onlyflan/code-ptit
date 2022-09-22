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
        int x=0;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]!='8' && s[i]!='6' && s[i]!='0'){
                x=1;
                break;
            }
            /* code */
        }
        if(x==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
