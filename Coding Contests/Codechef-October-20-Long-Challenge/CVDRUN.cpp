#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;
    while(t--){
        int n,k,x,y;
        cin >> n >> k >> x >> y;
        int a[n];
        int xr = x;
        for(int i=0;i<n;i++){
            a[i]=i;
        }
        while(1){
            if((x+k)%n==y){
                std::cout << "YES" << std::endl;
                break;
            }else{
                x = (x+k)%n;
                if(x==xr){
                    cout << "NO" << endl;
                    break;
                }
            }
        }
    }
	return 0;
}
