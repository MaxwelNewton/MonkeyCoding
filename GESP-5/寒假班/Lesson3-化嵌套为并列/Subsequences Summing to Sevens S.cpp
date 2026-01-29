#include <bits/stdc++.h>
using namespace std;

int a[500005];
int t[7] = {0,-1,-1,-1,-1,-1,-1};

int main()
{
	int n;
	cin>>n;
	int maxn = 0;
	for(int i = 1;i <= n;i++)
	{
		int x;
		scanf("%d",&x);
		a[i] = (a[i - 1] + x) % 7;
		if(t[a[i]] == -1)
		{
			t[a[i]] = i;
		}
		else
		{
			maxn = max(maxn,i - t[a[i]]);
		}
	}
	cout<<maxn;
}