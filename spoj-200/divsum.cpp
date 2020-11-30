#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	while(n)
	{
		int k;
		cin >> k;
		int sum = 0;
		for(int i=1;i<k;i++)
		{
			if(k%i==0)
			{
				sum = sum+i;
			}
		}
		cout << sum << endl;
		n--;
	}
	return 0;
}