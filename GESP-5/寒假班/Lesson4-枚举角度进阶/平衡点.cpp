#include <bits/stdc++.h>
using namespace std;

long long a[300003];
long long sum[300003];
long long sumi[300003];

int main()
{
    int n;
    cin>>n;
    long long minn = 1e6;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
        sum[i] = sum[i - 1] + a[i];
        sumi[i] = sumi[i - 1] + a[i] * i;
    }
    for(int i = 1;i <= n;i++)
    {
        long long l = i * sum[i - 1] - sumi[i - 1];
        long long r = (sumi[n] - sumi[i]) - i * (sum[n] - sum[i]);
        minn = min(minn,abs(l - r));
    }
    cout<<minn;
}