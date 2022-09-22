#include <bits/stdc++.h>
using namespace std;

int a[1000002];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n, max=0;
		cin>>n;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++) {  
            int x;
            cin>>x;
            if(x>0) a[x]=1;
            if(x>max) max=x;
        }
        for(int i=1;i<max+2;i++){
            if(a[i]==0){
                cout<<i<<"\n";
                break;
            }
        }
	}
}
