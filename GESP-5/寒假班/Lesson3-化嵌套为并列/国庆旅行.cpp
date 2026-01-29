#include <bits/stdc++.h>
using namespace std;

int a[100001];
int b[100001];
int c[100001];

int main()
{
    int n;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin>>x;
        a[i] = x + 1;
        b[i] = x - 1;
    }
    c[n - 1] = -1e9;
    for(int i = n;i >= 1;i--)
    {
        c[i] = max(c[i + 1],b[i]);
    }
    int ans = 0;
    for(int i = 1;i < n;i++)
    {
        ans = max(ans,a[i] + c[i + 1]);
    }
    cout<<ans<<endl;
}