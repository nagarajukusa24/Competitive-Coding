#include<bits/stdc++.h>
using namespace std;
int main()
{

	int t;
	cin >> t;
	while(t--)
	{
		int n,c=0;
		cin >> n;
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				c+=1;
			}
		}
		if(c==2)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}