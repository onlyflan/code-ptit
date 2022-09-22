#include <bits/stdc++.h>
using namespace std;

void usnt(long long n){
	for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
	}
	if(n!=1) cout<<n;
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
        usnt(n);
	}
}
