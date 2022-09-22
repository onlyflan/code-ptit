#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        long long n,res=1;
        cin>>n;
        for(long long i=2;i<=n;i++) res=res*i/__gcd(res,i); 
        cout<<res<<"\n";
	}
}
