#include <bits/stdc++.h>
using namespace std;
int check(int n){
    int chan=0, le=0;
    while(n!=0){
        int m=n%10;
        if(m%2==0) chan++;
        else le++;
        n/=10;
    }
    return (chan==le);
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, count=0;
    cin>>n;
    for(int i=pow(10,n-1); i<=pow(10,n)-1;i++){
        if(check(i)) {
            cout<<i<<" ";
            count++;
        }
        if (count==10) {
            cout<<"\n";
            count = 0;
        }
    }
}
