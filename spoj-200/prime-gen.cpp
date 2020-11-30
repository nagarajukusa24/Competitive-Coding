#include<bits/stdc++.h>
using namespace std;
std::vector<int> arr;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		int s=0;
		cin >> a >> b;
		while(a<=b)
		{
			s=0;
			for(int i=1;i<=a;i++)
			{
				if(a%i==0)
				{
					s+=1;
				}
			}
			if(s==2)
			{
				arr.push_back(a);
			}
			a++;
		}
		for(int i=0;i<arr.size();i++)
		{
			cout << arr[i] << endl;
		}
		arr.clear();
		cout << "\n";
	}
	return 0;
}