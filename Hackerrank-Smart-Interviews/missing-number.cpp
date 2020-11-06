#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[100];
		int s = 0;
		for(int i=0;i<n;i++){
			cin >> a[i];
			s = s + a[i];
		}
		n++;
		int k =n*(n+1);
		int s1 = k/2;
		cout << s1-s << endl;
		// cout << s1 << " " << s << endl;
	}
	return 0;
}