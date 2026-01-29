#include <bits/stdc++.h>
using namespace std;

int a[200002];

int main()
{
    int n,m,q;
    cin>>n>>m>>q;
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin>>x;
        a[i] = a[i - 1];
        if(__gcd(x,q) == 1)
        {
            a[i]++;
        }
    }
    for(int i = 1;i <= m;i++)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r] - a[l - 1]<<endl;
    }
}