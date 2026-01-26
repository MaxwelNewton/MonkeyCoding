#include <bits/stdc++.h>
using namespace std;

bool solve(string s)
{
	string t[4];
	int cnt = 0;
	for(int i = 0;i < s.size();i++)
	{
		if(cnt > 3)
			return false;
		if(s[i] <= '9' && s[i] >= '0')
			t[cnt] += s[i];
		else if(s[i] == '.')
			cnt++;
		else
			return false;
	}
	if(cnt != 3)
		return false;
	for(int i = 0;i < 4;i++)
	{
		if(t[i] == "")
			return false;
		if(t[i][0] == '0' && t[i].size() > 1)
			return false;
		long long x = stoll(t[i]);
		if(x < 0 || x > 255)
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		string s;
		cin>>s;
		if(solve(s))
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<endl;
	}
}