#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		int x=0;
		cin >> s;
		if(s[1]=='+'){
			++x;
		}else{
			x++;
		}
		cout << x;
	}
	return 0;
}