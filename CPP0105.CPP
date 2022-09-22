#include <bits/stdc++.h>
using namespace std;
int check(int n){
    while(n!=0){
        int m=n%10;
        if(m==0 || m==6 || m==8 ) return 1;
        else return 0;
        n/=10;
    }
    return n;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(check(n)) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}
