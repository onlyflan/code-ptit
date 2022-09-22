#include <bits/stdc++.h>
using namespace std;
long long check(long long n){
    while(n>=10){
        int m=n%10, p=(n/10)%10;
        if(m!=p+1 && m!=p-1) {
            return 0;
            break;
        }
            n/=10;
    }
    return 1;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        long long n;
        cin>>n;
        if(check(n)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
	}
}
