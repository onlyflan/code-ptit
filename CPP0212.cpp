#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod=1e9+7;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        int n,x,sum=0;
        cin>>n>>x;
        int a[n];
        for (int i = n-1; i >= 0; i--)
        {
            cin>>a[i];
            /* code */
        }
		ll lt=1, res=0;
		for (int i = 0; i < n ; i++)
		{
			res+=a[i]*lt;
			res%=mod;
			lt*=x;
			lt%=mod;
			/* code */
		}
		cout<<res<<"\n";
	}
}
