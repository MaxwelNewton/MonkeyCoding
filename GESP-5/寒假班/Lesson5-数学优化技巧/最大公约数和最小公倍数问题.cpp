#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x,y;
    cin>>x>>y;
    long long ans = 0;
    if(y % x != 0)
    {
        cout<<0;
        return 0;
    }
    long long n = y / x;
    for(long long i = 1;i * i <= n;i++)
    {
        if(n % i == 0 && __gcd(i,n / i) == 1)
        {
            ans += 2;
            if(i * i == n)
            {
                ans--;
            }
        }
    }
    cout<<ans;
}