#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int solve(int n){
    if(n==0){
        return 0;
    }
    return n+solve(n-1);
}
int main() {
	// your code goes here
	int n;
	cin >> n;
	 int a[n],s = 0;
	for(int i=0;i<n;i++){
	    cin >> a[i];
	    s = s+a[i];
	}
	int k = solve(n);
	//int r = (n*(n+1))/2;
	if(s==k){
	    std::cout << "YES" << std::endl;
	}else{
	    cout << "NO" << endl;
	}
	return 0;
}
