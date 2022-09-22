#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a,m;
        cin>>a>>m;
        for(int i=0;i<m;i++){
            if(a*i%m==1){
                cout<<i<<"\n";
                break;
            }
        }
    }
}
