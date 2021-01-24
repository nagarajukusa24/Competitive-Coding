#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	int s = accumulate(a,a+n,0);
	s = s/2;
	int s1=0,cnt=0;
	for(int i=n-1;i>=0;i--){
		s1 = s1+a[i];
		cnt++;
		if(s1>s){
			break;
		}
	}
	cout << cnt << endl;
	return 0;
}