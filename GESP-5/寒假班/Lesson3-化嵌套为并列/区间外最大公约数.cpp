#include <bits/stdc++.h>
using namespace std;

int a[100001];
int x[100001];
int y[100001];

int main()
{
    int n,q;
    cin>>n>>q;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
        x[i] = __gcd(x[i - 1],a[i]);
    }
    for(int i = n;i >= 1;i--)
    {
        y[i] = __gcd(y[i + 1],a[i]);
    }
    for(int i = 1;i <= q;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<__gcd(x[l - 1],y[r + 1])<<endl;
    }
}