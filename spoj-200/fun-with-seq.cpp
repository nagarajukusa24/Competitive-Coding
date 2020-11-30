#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main()
{

	int n,m;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	cin >> m;
	int b[m];
	for(int j=0;j<m;j++)
	{
		cin >> b[j];
	}

	for(int i=0;i<n;i++)
	{
		int s = 0;
		int rem = a[i];
		for(int j=0;j<m;j++)
		{
			if(rem != b[j])
			{
				s+=1;
			}
		}
		if(s==m)
		{
			arr.push_back(rem);
		}
	}
	for(int k=0;k<arr.size();k++)
	{
		cout << arr[k] << " ";
	}
	return 0;
}