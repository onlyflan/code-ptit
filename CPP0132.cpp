#include <bits/stdc++.h>
using namespace std;

void usntln(long long n){
    int res=0;
	for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            res=i;
            n/=i;
        }
	}
	if(n!=1) cout<<n;
    else cout<<res;
    cout<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
        usntln(n);
	}
}
