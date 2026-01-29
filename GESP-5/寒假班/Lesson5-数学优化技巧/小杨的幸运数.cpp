#include <bits/stdc++.h>
using namespace std;

const int N = 2000002;
int f[N],last = -1;

int main()
{
	int a,n;
	cin>>a>>n;
	for(int i = ceil(sqrt(a));i * i <= N;i++)
	{
		int num = i * i;
		for(int j = num;j <= N;j += num)
		{
			f[j] = j;
		}
	}
	for(int i = N;i >= 1;i--)
	{
		if(f[i] == i)
			last = i;
		else
			f[i] = last;
	}
	for(int i = 1;i <= n;i++)
	{
		int x;
		cin>>x;
		if(f[x] == x)
		{
			cout<<"lucky";
		}
		else
		{
			cout<<f[x];
		}
		cout<<endl;
	}
}