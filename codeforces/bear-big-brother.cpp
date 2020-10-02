#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int c = 0;
    cin >> a >> b;
    while(1){
        a = a*3;
        b = b*2;
        c++;
        if(a>b){
            break;
        }
    }
    cout << c << endl;
    return 0;
}