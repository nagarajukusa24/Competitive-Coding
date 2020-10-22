#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		int s=0;
		do{
			for(int i=1;i<n-1;i++){
				s=s+a[i]+a[i-1];
			}
			if(s>0){
				cout << "YES" << endl;
				for(int i=0;i<n;i++){
					cout << a[i] << " ";
				}
				break;
			}else{
				
			}
		}while(1);
	}
	return 0;
}