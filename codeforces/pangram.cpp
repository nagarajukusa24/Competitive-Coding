#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	string str;
	cin >> str;
	for(int i=0;i<n;i++){
		str[i] =str[i]+32;
	}
	cout << str;
	return 0;
}