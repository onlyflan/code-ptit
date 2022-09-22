#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void prime(int n){
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++){
        if (n%i==0) {
            cout<<i<<" ";
            cnt++;
            break;
        }
    }
    if(cnt==0) cout<<n<<" "; 
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            prime(i);
        }
        cout<<"\n";
	}
}
