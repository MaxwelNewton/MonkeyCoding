#include <bits/stdc++.h>
using namespace std;

int a[1000001];

int main()
{
	for(int i = 1;i <= 1000000;i++)
	{
		int sum = i;
		int t = i;
		while(t)
		{
			sum += t % 10;
			t /= 10;
		}
		if(a[sum] == 0)
		{
			a[sum] = i;
		}
	}
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		int x;
		cin>>x;
		if(a[x])
		{
			cout<<a[x];
		}
		else
		{
			cout<<"No";
		}
		cout<<endl;
	}
}