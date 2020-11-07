#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	for(int i=0;i<n;i++){
		int c = 0;
		for(int j=i;j<n;j++){
			if(a[j]<a[j+1]){
				c++;
			}
		}
	}
	return 0;
}