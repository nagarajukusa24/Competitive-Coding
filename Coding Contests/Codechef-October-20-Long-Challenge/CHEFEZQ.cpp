#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int t;
    cin >> t;
    while(t--){
        long long int n,k,s=0;
        cin >> n >> k;
         long long int q;
        for(int i=0;i<n;i++){
          
            cin >> q;
            s=s+q;
        }
        s=s/k;
        cout << s+1 << endl;
    }
    return 0;
}