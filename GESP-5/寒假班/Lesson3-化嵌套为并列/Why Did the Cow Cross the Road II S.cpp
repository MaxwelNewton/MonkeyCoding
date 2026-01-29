#include <bits/stdc++.h>
using namespace std;

int a[100001];

int main()
{
	int n,k,b;
	cin>>n>>k>>b;
	for(int i = 1;i <= b;i++)
	{
		int x;
		cin>>x;
		a[x]++;
	}
	for(int i = 1;i <= n;i++)
	{
		a[i] += a[i - 1];
	}
	int minn = b;
	for(int i = k;i <= n;i++)
	{
		minn = min(minn,a[i] - a[i - k]);
	}
	cout<<minn;
}