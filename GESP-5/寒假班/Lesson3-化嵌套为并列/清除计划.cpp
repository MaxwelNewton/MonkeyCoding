#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int t = 0;
    int cnt = 0;
    char c[301][301] = {};
    int x[301] = {},y[301] = {};
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            cin>>c[i][j];
            if(c[i][j] == '*')
            {
                x[j]++;
                y[i]++;
                t++;
            }
        }
    }
    for(int i = 1;i <= n;i++)
    {
        for(int j = 1;j <= m;j++)
        {
            if(c[i][j] == '*')
            {
                if(x[j] + y[i] - 1 == 0)
                {
                    cnt++;
                }
            }
            else
            {
                if(x[j] + y[i] == t)
                {
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
}

int main()
{
    int q;
    cin>>q;
    for(int i = 1;i <= q;i++)
    {
        solve();
    }
}