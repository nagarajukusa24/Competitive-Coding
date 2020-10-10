#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin >> a[i];
	}
	sort(a,a+n);
	int c=0,s=0;
	for(int i=0;i<n;i++){
	    s=s+a[i];
	    if(s<=500){
	        c++;
	    }
	}
	std::cout << c << std::endl;
	return 0;
}
