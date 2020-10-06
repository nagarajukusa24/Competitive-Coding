#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t,xs=0,ys=0,zs=0;
	cin >> t;
	while(t--){
		//for(int i=0;i<3;i++){
			int x,y,z;
			cin >> x >> y >> z;
			xs=xs+x;
			ys=ys+y;
			zs+=z;
		
	}
	if(xs==0 && ys==0 && zs==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}