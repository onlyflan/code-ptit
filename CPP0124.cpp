#include <bits/stdc++.h>
using namespace std;

void tsnt(int n){
	for(int i=2;i<=sqrt(n);i++){
        int cnt=0;
		while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt!=0) cout<<i<<" "<<cnt<<"\n";
	}
    if(n!=1) cout<<n<<" 1";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
    tsnt(n);
}