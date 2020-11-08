==================================SYSTEM DEFINED OPERATIONS=============================
#Preprocessor Directives::
#define fastio ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL)
#define ld long double
#define vt vector
#define pb push_back
#define FOR(n) for(int i=0;i<n;i++)

#define ll long long
#define dd double
void read(int &a, int &b) { cin>>a>>b; }

#include<iostream>
#include<utility>
#include<algorithm>
#include<deque>
#include<cstdio>

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<iostream>
#include<algorithm>
#include<map>
#include<stack>
#include<queue>
#include<vector>
#include<set>
#include<string>


 ios_base::sync_with_stdio(0);
 

============================ARRAY OPERATIONS===========================
Sum of entire array:
accumulate(a,a+n,0);

================================================ SETS STL ===================
set<int,greater<int>> s; //elements stores in non-increasing order
set<int> s; //set syntax for storing elements
s.insert(param); //
for(auto it=s.begin();it!=s.end();it++){
	cout << *it << " ";
}
============================================= VECTOR OPERATIONS =========================
shifting vector in clockwise n anticlock wise:
std::rotate(vec1.begin(), vec1.begin()+rotL, vec1.end());  // left rotate
std::rotate(vec2.begin(), vec2.begin()+vec2.size()-rotR, vec2.end()); //right rotate

std::distance(v.begin(), std::unique(v.begin(), v.begin() + 12));  // Finding unique elements in vector


 rotate(a,a+n-k,a+n);  //rotate an array towards right..!

for shifting arrays in +ve or -ve side:
	valarray<int> var1;
	var1.shift(x) ==> x is +ve : Left shift , else : Positive shift

=======================Binary Level Operations=================
Even / Odd number shortcut:
	if(num & 1):
		print("Odd")
	else:
		print("Even")

n = n << 1;   // Multiply n with 2 
n = n >> 1;   // Divide n by 2 


   string s;
   set<char> l;
   getline(cin, s);

   
//  Use of strlen() can be avoided by: 
for (i=0; s[i]; i++)  
{  
}

__gcd(x, y);  // inbuilt gcd function


bitset<32>(x); //Used for storing bits
=================================MAIN function related=================================
#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);

	return 0;
}
===========================================================================