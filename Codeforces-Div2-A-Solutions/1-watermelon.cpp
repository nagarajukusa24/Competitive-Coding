#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	if(n%2==0 && n>2){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}