#include <bits/stdc++.h>
using namespace std;

string s1[1001];
string s2[101];

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
	{
		cin>>s1[i];
		for(int j = 0;j < s1[i].size();j++)
		{
			if(s1[i][j] <= 'Z')
			{
				s1[i][j] += 'a'- 'A';
			}
		}
	}
	for(int i = 1;i <= m;i++)
	{
		cin >> s2[i];
		for(int j = 0;j < s2[i].size();j++)
		{
			if(s2[i][j] <= 'Z')
			{
				s2[i][j] += 'a'- 'A';
			}
		}
	}
	for(int i = 1;i <= n;i++)
	{
		int cnt = 0;
		for(int j = 1;j <= m;j++)
		{
			int t = 0;
			for(int k = 0;k < s1[i].size();k++)
			{
				if(s1[i][k] == s2[j][t])
				{
					if(t == s2[j].size() - 1)
					{
						cnt++;
						break;
					}
					t++;
				}
			}
		}
		cout << cnt << endl;
	}
}