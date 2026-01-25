#include <bits/stdc++.h>
using namespace std;

int t[1001];

int main()
{
    int n,m;
    cin>>n>>m;
    bool flag = 0;
    int cnt1 = 0,cnt = 0;
    for(int i = 1;i <= n;i++)
    {
        int a,b;
        cin>>a>>b;
        cnt1 = cnt1 - a + b;
        if(cnt1 > m)
        {
            t[++cnt] = i;
            cnt1 = m;
            flag = 1;
        }
    }
    if(flag)
    {
        cout<<"No"<<endl;
        for(int i = 1;i <= cnt;i++)
        {
            cout<<t[i]<<endl;
        }
    }
    else
    {
        cout<<"Yes"<<endl;
        cout<<cnt1;
    }
}