#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	set<int,greater<int>> s;
	
		int p;
		cin >> p;
		for(int i=0;i<p;i++){
			int k;
			cin >> k;
			s.insert(k);
		}
		int q;
		cin >> q;
		for(int i=0;i<q;i++){
			int k;
			cin >> k;
			s.insert(k);
		}
		if(s.size()==t){
			cout << "I become the guy." << endl;
		}else{
			cout << "Oh, my keyboard!" << endl;
		}
	
	return 0;
}