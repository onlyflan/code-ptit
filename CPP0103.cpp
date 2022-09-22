#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin>>n;
	double sum=0;
	for(int i=1;i<=n;i++){
		sum+=(double)1/i;
	}
    cout<<setprecision(4)<<fixed<<sum;
}
