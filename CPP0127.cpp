#include <bits/stdc++.h>
using namespace std;

int prime(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,c=0;
		cin>>n;
		for(int i=2;i<=n/2;i++){
			if(prime(i)&&prime(n-i)){
				cout<<i<<" "<<n-i<<endl;
                c=1;
				break;
			}
		}
        if(c==0) cout<<"-1\n";
	}
}
