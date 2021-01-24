#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> v;
    vector<int> v1;
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    for(int i=0;i<n;i++){
        int r = v.at(i+1);
        v1.push_back(r);
    }
    for(int i=0;i<n;i++){
        cout << v1[i] << " ";
    }
	return 0;
}