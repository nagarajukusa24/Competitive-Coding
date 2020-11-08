#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int f=0;
		for(int i=0;i<n-1;i++){
			if(a[i]+a[i+1]==k){
				f = 1;
			}
		}
		if(f){
			cout << "True" << endl;
		}else{
			cout << "False" << endl;
		}
	}
	return 0;
}