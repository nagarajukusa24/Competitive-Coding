#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int ar[8],br[8];
        int i=7;
        while(a>0){
            ar[i]=a%2;
            a=a/2;
            i--;
        }
        i=7;
        while(b>0){
            br[i]=b%2;
            b=b/2;
            i--;
        }
        int c = 0;
        for(int i=0;i<8;i++){
            if(ar[i]!=br[i]){
                c++;
            }
        }
        cout << c << endl;
        for(int i=0;i<8;i++){
            cout << ar[i];
        }
        for(int i=0;i<8;i++){
            cout << br[i];
        }
    }
    return 0;
}
