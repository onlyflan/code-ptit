#include <bits/stdc++.h>
using namespace std;
int sum(int n){
    while(n>=10){
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;            
        }
        n=sum;
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
        cout<<sum(n)<<"\r";
	}
}
