#include <bits/stdc++.h>
using namespace std;

bool aba(long long n)
{
	long long t = n;
	long long sum = 0;
	while(t)
	{
		sum = sum * 10 + t % 10; 
		t /= 10;
	}
	if(sum == n)
	{
		return true;
	}
	return false;
}

int main()
{
	long long n;
	cin>>n;
	int cnt = 0;
	for(long long i = 1;i * i <= n;i++)
	{
		if(aba(i * i))
		{
			cnt++;
		}
	}
	cout<<cnt;
}