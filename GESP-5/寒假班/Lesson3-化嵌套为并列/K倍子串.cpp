#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int cnt[1000001] = {1};

int main()
{
	string s;
	int k;
	cin>>s>>k;
	s = " " + s;
	long long ans = 0;
	for(int i = 1;i < s.size();i++)
	{
		a[i] = (s[i] - '0' + a[i - 1]) % k;
		ans += cnt[a[i]];
		cnt[a[i]]++;
	}
	cout<<ans;
}