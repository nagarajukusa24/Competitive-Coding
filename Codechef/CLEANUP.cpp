#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int a[1000];
        for(int i=0;i<m;i++){
            cin >> a[i];
        }
        sort(a,a+m);
        int l[n];
        for(int i=0;i<n;i++){
            l[i]=0;
        }
        for(int i=0;i<m;i++){
            l[a[i]-1]=1;
        }
        // for(int i=0;i<n;i++){
        //     cout << l[i];
        // }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(l[i]==0){
                v.push_back(i);
            }
        }
        vector<int> chef;
        vector<int> ass;
        for(int i=0;i<v.size();i++){
            if(i%2==0){
                chef.push_back(v[i]+1);
            }else
            {
                ass.push_back(v[i]+1);
            }
            
        }
        for(int i=0;i<chef.size();i++){
            cout << chef[i] << " ";
        }
        cout << endl;
        for(int i=0;i<ass.size();i++){
            cout << ass[i] << " ";
        }
    }
    return 0;
}