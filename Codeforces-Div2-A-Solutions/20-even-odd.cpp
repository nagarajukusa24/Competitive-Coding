#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	 int n,k;
	cin >> n >> k;
	int a[n];
	if(n%2==0){
		for(int i=0;i<n/2;i++){
			a[i] = (2*i)+1;
		}
		int k1 = 1;
		for(int i=n/2;i<n;i++){
			a[i] = 2*k1;
			k1++;
		}
	}else{
		for(int i=0;i<(n/2)+1;i++){
			a[i] = (2*i)+1;
		}
		int k1 = 1;
		for(int i=(n/2)+1;i<n;i++){
			a[i] = 2*k1;
			k1++;
		}
	}
	cout << a[k-1] << endl;
	// for(int i=0;i<n;i++){
	// 	cout << a[i] << " ";
	// }
	return 0;
}