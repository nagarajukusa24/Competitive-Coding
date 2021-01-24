#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);

	long long int t;
	// cin >> t;
	scanf("%d",&t);
	while(t--){
		long long int l,r,c=0;
		// cin >> l >> r;
		scanf("%d %d",&l,&r);
		for(int i=l;i<=r;i++){
			for(int j=i;j<=r;j++){
				c++;
			}
		}
		// cout << c << endl;
		printf("%d \n",c);
	}
	return 0;
}