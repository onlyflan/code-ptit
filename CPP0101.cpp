#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n;
        long long sum=0;
        cin>>n;
        sum=(n+1)*n/2;
        cout<<sum<<"\n";
    }
}
