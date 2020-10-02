#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	   vector<int> v;
	while(t--){
	   int n,b;
	    v = {0};
	   cin >> n >> b;
	   for(int i=0;i<n;i++){
	       int w,h,p;
	       
	       cin >> w >> h >> p;
	       if(p<=b){
	           int k = w*h;
	           v.push_back(k);
	       }
	   }
	   if(*max_element(v.begin(),v.end())==0){
	       cout << "no tablet" << endl;
	   }else{
	   cout << *max_element(v.begin(),v.end()) << endl;
	}
	
	
    }
    return 0;
}
