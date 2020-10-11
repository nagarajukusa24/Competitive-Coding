#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	int res=0;
	cin >> n;
	while(n--){
	    int a[3],c=0;
	    for(int i=0;i<3;i++){
	        int k;
	        cin >> k;
	        if(k>0){
	            c++;
	        }
	    }
	    if(c>=2){
	        res++;
	    }
	}
	std::cout << res << std::endl;
	return 0;
}
