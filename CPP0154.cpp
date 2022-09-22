#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        int n,k,s=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            s+=i%k;
        }
        if(s==k) cout<<"1"<<"\n";
        else cout<<"0"<<"\n";
	}
}
