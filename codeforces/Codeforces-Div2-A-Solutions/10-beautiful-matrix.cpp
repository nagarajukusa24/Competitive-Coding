#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	int a[5][5],x,y;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin >> a[i][j];
			if(a[i][j]==1){
				x = i;
				y = j;
			}
		}
	}
	// Using the formula : |r-2| + |c-2|
	cout << abs(2-x)+abs(2-y) << endl;
	return 0;
}