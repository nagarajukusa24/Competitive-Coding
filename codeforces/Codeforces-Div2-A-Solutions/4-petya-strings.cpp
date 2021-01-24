// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	ios_base::sync_with_stdio(false);
// 	string s1,s2;
// 	cin >> s1 >> s2;
// 	static int l1,l2;
// 	for(int i=0;i<s2.length();i++){
// 		if(s1[i]>='A' && s1[i]<='Z'){
// 			s1[i]=s1[i]+32;
// 		}
// 		if(s2[i]>='A' && s2[i]<='Z'){
// 			s2[i]=s2[i]+32;
// 		}
// 		if(s1[i]>s2[i]){
// 			l1++;
// 		}else{
// 			l2++;
// 		}
// 	}
// 	cout << l1 << " " << l2;
// 	if(l1<l2){
// 		cout << -1 << endl;
// 	}else if(l1>l2){
// 		cout << 1 << endl;
// 	}else if(l1==l2){
// 		cout << 0 << endl;
// 	}
// 	cout << s1 << " " << s2 ;
// 	return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	string s1,s2;
	cin >> s1 >> s2;
	for(int i=0;i<s1.size();i++){
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
	}
	if(s1==s2){
		cout << "0" << endl;
	}else{
		for(int i=0;i<s1.size();i++){
			if(s1[i]<s2[i]){
				cout << "-1" << endl;
				break;
			}
			if(s1[i]>s2[i]){
				cout << "1" << endl;
				break;
			}
		}
	}
	return 0;
}