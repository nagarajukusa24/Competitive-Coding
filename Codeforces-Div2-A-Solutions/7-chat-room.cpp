#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	string s;
	cin >> s;
	string s1="hello";
	int j=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==s1[j]){
			j++;
			if(j==5){
				break;
			}
		}
	}
	if(j==5){
		cout << "YES";
	}else{
		cout << "NO";
	}
	return 0;
}