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
	int a,b,c=0;
	cin>>a>>b;
    if(a>b){
        c=b;
        b=a;
        a=c;
    }
    for(int i=a;i<=b;i++)
	if(prime(i)) cout<<i<<" ";
}