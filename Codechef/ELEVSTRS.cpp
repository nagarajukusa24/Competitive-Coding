#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    double n,v1,v2;
	    cin >> n >> v1 >> v2;
	    double r1 = n*sqrt(2);
	    double t1 = r1/v1;
	    double r2 = n*2;
	    double t2 = r2/v2;
	    if(t1<t2){
	        std::cout << "Stairs" << std::endl;
	    }else{
	        cout << "Elevator" << endl;
	    }
	}
	
	
	return 0;
}
