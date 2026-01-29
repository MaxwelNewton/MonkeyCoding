#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 5;
long long a[N];

int main()
{
	for(int i = 1;i <= N;i++)
	{
		a[i] = 1;
	}
	for(int i = 2;i <= N;i++)
	{
		if(a[i] != 1)
			continue;
		for(int j = i;j <= N;j += i)
		{
			a[j] *= i;
		}
	}
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		scanf("%d",&x);
		cout<<a[x]<<" ";
	}
}