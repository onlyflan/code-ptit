#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,s,max=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>s;
			if(s>max) max=s;
		}
		cout<<max<<"\n";
	}
}
