#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	static int c=0;
	while(t--){
		
		int a[3];
		int n = sizeof(a)/sizeof(a[0]);
		for(int i=0;i<3;i++){
			cin >> a[i];
		}
		int sum = accumulate(a,a+n,0);
		if(sum>=2){
			c++;
		}
	}
	cout << c << endl;
	return 0;
}