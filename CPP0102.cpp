#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        char a;
		cin>>a;
		if(a>= 'a' && a<='z') a-=32;
		else a+=32;
		cout<<a<<"\n";
    }
}
