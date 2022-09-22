#include <bits/stdc++.h>
using namespace std;
    
void usnttk(long long a, long long b){
    int c[100]={0};
	int x=0;
    for(int i=2;i<=sqrt(a);i++)
	while(a%i==0){
        x++;
		c[x]=i;
        a/=i;
	}
    if (a!=1) c[x+1]=a;
    if(c[b]==0) cout<<"-1\n";
    else cout<<c[b]<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
        usnttk(a,b);
	}
}
