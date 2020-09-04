#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=321,s=0;
    while(n>0){
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    s=s+3;
    cout << s;
    return 0; 
}