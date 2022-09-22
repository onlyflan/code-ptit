#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    while(a!=b){
        if(a>b) a-=b;
        else b-=a;
    }
    return a;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        long long a,b;
        cin>>a>>b;
        cout<<a*b/gcd(a,b)<<" "<<gcd(a,b)<<"\n";
	}
}
