#include <bits/stdc++.h>
using namespace std;

int a[1000002];
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        int max=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            if (x>max) max=x;
            /* code */
        }
        cout<<max<<"\n";
	}
}
