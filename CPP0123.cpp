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
	int n;
	cin>>n;
	if(prime(n)) cout<<"YES";
	else cout<<"NO";
}