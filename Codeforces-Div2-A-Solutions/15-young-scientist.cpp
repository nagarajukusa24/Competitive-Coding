#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int x=0,y=0,z=0;
	while(n--){
		int xi,yi,zi;
		cin >> xi >> yi >> zi;
		x=x+xi;
		y=y+yi;
		z+=zi;
	}
	if(x==0 && z==0 && y==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	return 0;
}