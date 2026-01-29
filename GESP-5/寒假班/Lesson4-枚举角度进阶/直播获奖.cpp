#include <bits/stdc++.h>
using namespace std;

int a[606];

bool cmp(int a,int b)
{
	return a > b;
}

int main()
{
	int n,w;
	cin>>n>>w;
	for(int i = 1;i <= n;i++)
	{
		int x;
		cin>>x;
		a[x]++;
		int cnt = max(1,i * w / 100);
		for(int j = 600;j >= 0;j--)
		{
			cnt -= a[j];
			if(cnt <= 0)
			{
				cout<<j<<' ';
				break;
			}
		}
	}
	return 0;
}