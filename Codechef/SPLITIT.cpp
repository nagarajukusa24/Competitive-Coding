#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	     int n;
         cin >> n;
         string s;
         cin >> s;
         int res = 0;
            for(int i=0;i<n-1;i++){
                if(s[i]==s[n-1]){
                    res = 1;
                }
            }
    if(res){
        std::cout << "YES" << std::endl;
    }else{
        cout << "NO" << endl;
    }
 }
return 0;
}