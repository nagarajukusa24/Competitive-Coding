#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n,x;
		cin >> n >> x;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		for(int i=0;i<n;i++){
			cin >> b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		int flag = 0;
		reverse(b,b+n);
		for(int i=0;i<n;i++){
			if(a[i]+b[i]>x){
				flag = 1;
			}
		}
		if(flag){
			cout << "NO" << endl;
		}else{
			cout << "YES" << endl;
		}
	}
	return 0;
}