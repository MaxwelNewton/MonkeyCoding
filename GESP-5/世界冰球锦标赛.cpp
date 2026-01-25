#include <bits/stdc++.h>
using namespace std;

long long n,m;
long long a[44];
vector<long long> vl,vr;

void dfs(int l,int r,long long sum,vector<long long>& v)
{
    if(l > r)
    {
        v.push_back(sum);
        return;
    }
    dfs(l + 1,r,sum,v);
    dfs(l + 1,r,sum + a[l],v);
}

int main()
{
    cin>>n>>m;
    for(int i = 1;i <= n;i++)
    {
        cin>>a[i];
    }
    int mid = n / 2;
    dfs(1,mid,0,vl);
    dfs(mid + 1,n,0,vr);
    sort(vr.begin(),vr.end());
    long long cnt = 0;
    for(long long x : vl)
    {
        int t = upper_bound(vr.begin(),vr.end(),m - x);
        cnt += distance(vr.begin(),t);
    }
    cout<<cnt;
}