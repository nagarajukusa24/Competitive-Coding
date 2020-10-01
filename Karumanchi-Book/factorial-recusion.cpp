#include<iostream>
using namespace std;
int fact(int );
int main()
{
    int n=10;
    cout << fact(n) << endl;
    return 0;
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
    
}