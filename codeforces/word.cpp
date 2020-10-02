#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	int c=0,nc=0;
	for(int i=0;i<s.length();i++){
		if(s[i]>=65 && s[i]<=90){
			c++;
		}else{
			nc++;
		}
	}
	if(c>nc){
		//tolower(s);
		    transform(s.begin(), s.end(), s.begin(), ::toupper); 

	}else{
		//toupper(s);   
		 transform(s.begin(), s.end(), s.begin(), ::tolower); 

	}
	cout << s << endl;
	return 0;
}