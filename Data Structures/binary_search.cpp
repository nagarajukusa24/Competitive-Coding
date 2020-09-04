
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3,4,5,6};
    int k = 10,flag=0;
     int n = sizeof(a)/sizeof(a[0]);
    int low = 0, high = n-1;
    while (low<=high)
    {
        int mid = (low+high)/2;
        if(a[mid]==k){
            //cout << "found";
            flag=1;
            break;
        }
        else if(k<a[mid]){
            high = mid-1;
        }
       else if(k>a[mid]){
           low = mid+1;
       } 
    }
    if(flag==1){
         cout << "FOund";
    } else
    {
        cout << "Not Found";
    }
     
    return 0;
}
