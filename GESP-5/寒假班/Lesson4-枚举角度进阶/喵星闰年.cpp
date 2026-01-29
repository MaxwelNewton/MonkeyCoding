#include <bits/stdc++.h>
using namespace std;

bool hbzd(int n)
{
	for(int i = 2;i * i <= n;i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool bzd(int n)
{
	for(int i = 2;i * i <= n;i++)
	{
		if(n % i == 0 && hbzd(n / i) && hbzd(i))
		{
			return true;
		}
	}
	return false;
}

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    for(int i = 1;i <= 10000;i++)
    {
        int t = i;
        int l = 0;p = 1;
        while(t)
        {
            l = l * 10 + t % 10;
            t /= 10;
            p *= 10;
        }
        int a = i * p + l;
        int b = i / 10 * p + l;
        if(a <= n && bzd(a))
            cnt++;
        if(b <= n && bzd(b))
            cnt++;
    }
    cout<<cnt;
}