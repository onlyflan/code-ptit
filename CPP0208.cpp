#include <bits/stdc++.h>
using namespace std;

int a[1000002];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            /* code */
        }
        sort(a,a+n);
        cout<<a[x-1];
        cout<<"\n";
	}
}
