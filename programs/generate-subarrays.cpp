#include<bits/stdc++.h>
using namespace std;
void generateSubArray(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}
}
int main(){
	int arr[]={1,2,3,4};
	//int k = arr.size();
	int k = sizeof(arr)/sizeof(arr[0]);
	generateSubArray(arr,k);
	return 0;
}