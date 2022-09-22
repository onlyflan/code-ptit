#include <bits/stdc++.h>
using namespace std;
void pttsnt(int n){
    int cnt[100]={0};
    for (int i = 2; i <=sqrt(n); i++)
    {
        while(n%i==0){
            n/=i;
            cnt[i]++;
        }
        if(cnt[i]!=0) cout<<i<<" "<<cnt[i]<<" ";
        /* code */
    }
    if(n!=1) cout<<n<<" 1";
    cout<<"\n";
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        pttsnt(n);
	}
}
