#include <bits/stdc++.h>
using namespace std;

int a[100001];

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    for(int i = 1;i <= n;i++)
    {
        long long x;
        cin>>x;
        if(x > n)
        {
            cnt++;
        }
        else
        {
            a[x]++;
        }
    }
    for(int i = 1;i <= n;i++)
    {
        if(a[i] > i && a[i] != 0)
        {
            cnt += a[i] - i;
        }
		else if(a[i] < i && a[i] != 0)
		{
			cnt += a[i];
		}
    }
    cout<<cnt;
}
//for循环 O(n)