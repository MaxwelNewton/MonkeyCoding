#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		int sum = 0;
		string s;
		cin>>s;
		bool flag[27] = {};
		for(int j = 0;j < s.size();j++)
		{
			if(s[j] >= 'A' && s[j] <= 'Z')
				s[j] += 'a' - 'A';
			if(flag[s[j] - 'a' + 1])
				sum++;
			else
			{
				sum += 2;
				flag[s[j] - 'a' + 1] = 1;
			}
		}
		cout<<sum<<endl;
	}
}