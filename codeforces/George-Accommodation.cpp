#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	int c=0;
	for(int i=0;i<t;i++){
		int p,q;
		cin >> p >> q;
		if(q-p>=2){
			c++;
		}
	}
	cout << c << endl;
	return 0;
}