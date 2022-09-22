#include <bits/stdc++.h>
using namespace std;

long long fibo(int n){
    long long f0=0,f1=1,fn;
    for(int i=2;i<=n;i++){
        fn=f0+f1;
        f0=f1;
        f1=fn;
    }
    return fn;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fibo(n)<<"\n";
    }
}
