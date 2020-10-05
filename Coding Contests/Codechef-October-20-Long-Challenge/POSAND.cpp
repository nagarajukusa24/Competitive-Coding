#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    int t;
    long int n;
    cin >> t;
    while(t--){
       
         int f=0;
         int p=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=i+1;
        }
        do{
            int c=0;
            for(int i=0;i<n-1;i++){
                if((a[i]&a[i+1])>0){
                    c++;
                }
            }
            if(c==n-1){
                if(f==0){
                    for(int i=0;i<n;i++){
                    cout << a[i] << " ";
                }
                f=1;
                cout << endl;   
                break;
                }
            }else{
               p++;
            }
        }while(next_permutation(a,a+n));

    int fac = fact(n);
        if(p==fac){
            cout << -1 << endl;
        }
    }
    return 0;
}