#include <bits/stdc++.h>
using namespace std;

long long a[200002];
long long sum[200002];

int main()
{
    long long n;
    cin>>n;
    long long ans = 0;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    sort(a + 1,a + n + 1);
    for(int i = 1;i <= n;i++)
    {
        sum[i] = sum[i - 1] + a[i];
    }
    for(int i = 2;i <= n;i++)
    {
        ans += (i - 1) * a[i] - sum[i - 1];
    }
    cout<<ans;
}