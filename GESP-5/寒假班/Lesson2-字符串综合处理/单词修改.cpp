#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i = 0,cnt = 1;i < s.size();i++)
	{
		if(s[i] == ' ')
		{
			cnt = 0;
			cout<<' ';
		}
		else if(cnt % 2 != 0)
		{
			if(s[i] >= 'A' && s[i] <= 'Z')
			{
				cout<<s[i];
			}
			else
			{
				cout<<char(s[i] - 'a' + 'A');
			}
		}
		else
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				cout<<s[i];
			}
			else
			{
				cout<<char(s[i] - 'A' + 'a');
			}
		}
		cnt++;
	}
}