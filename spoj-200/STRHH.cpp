// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int t;
// 	while(t)
// 	{
// 		string str;
// 		cin >> str;
// 		int k = str.size();
// 		cout << k << endl;
// 		t--;
// 	}
// 	return 0;
// }

#include <iostream>
using namespace std;
 
 
int main() {
	int T;
	cin >> T;
	while(T--){
		string s;
		cin >> s;
		for(int i = 0 ; i < s.size()/2 ;i+=2){
			cout<< s[i] ;
		}
		cout<< endl;
	}
	return 0;
}