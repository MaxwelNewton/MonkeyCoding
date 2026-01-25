#include <bits/stdc++.h>
using namespace std;

int a[10001];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin>>x;
        a[x] += 1;
    }
    for(int i = 1;i <= m;i++)
    {
        int x;
        cin>>x;
        cout<<a[x]<<endl;
    }
}