#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int ar[8],br[8];
		for(int i=0;a>0;i++){
			ar[i] = a%2;
			a = a/2;
		}
		for(int i=0;b>0;i++){
			br[i] = b%2;
			b = b/2;
		}
		int c = 0;
		for(int i=7;i>=0;i--){
			if(ar[i]!=br[i]){
				c++;
			}
		}
		cout << c << endl;
		for(int i=0;i<8;i++){
			cout << ar[i];
		}
		cout << endl;
		for(int i=0;i<8;i++){
			cout << br[i];
		}
	}
	return 0;
}