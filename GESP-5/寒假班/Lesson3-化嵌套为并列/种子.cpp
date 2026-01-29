#include <bits/stdc++.h>
using namespace std;

char c[3003][3003];
long long sumb[3003][3003];
long long sumc[3003][3003];

int main()
{
	int n,m;
	cin>>n>>m;
	long long ans = 0;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			cin>>c[i][j];
			sumb[i][j] = sumb[i][j - 1] + (c[i][j] == 'B');
			sumc[i][j] = sumc[i - 1][j] + (c[i][j] == 'C');
		}
	}
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= m;j++)
		{
			if(c[i][j] == 'A')
			{
				int x = sumb[i][m] - sumb[i][j];
				int y = sumc[n][j] - sumc[i][j];
				ans += x * y;
			}
		}
	}
	cout<<ans;
}