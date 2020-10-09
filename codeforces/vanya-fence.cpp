#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n,h;
	cin >> n >> h;
	int k,s=0;
	for(int i=0;i<n;i++){
		cin >> k;
		if(k<=h){
			s++;
		}else{
			s+=2;
		}
	}
	cout << s << endl;
	return 0;
}