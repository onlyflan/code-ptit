#include <bits/stdc++.h>
using namespace std;

int uocso(int n){
    int cnt=1;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0) cnt++;
        if(sqrt(n)*sqrt(n)==n) cnt=cnt*2-1;
        else cnt*=2;    
        return cnt;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
        for(int i=4;i<=n;i++){
            if(uocso(i)==3) cout<<i<<" ";
        }
        cout<<"\n";
	}
}
