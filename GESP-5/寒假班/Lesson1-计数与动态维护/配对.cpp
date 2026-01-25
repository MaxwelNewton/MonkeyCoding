#include <bits/stdc++.h>
using namespace std;

int a[1000001];

int main()
{
    int n;
    cin>>n;
    int maxn = 0;
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin>>x;
        maxn = max(maxn,x);
        a[x]++;
    }
    long long cnt = 0;
    for(int i = 0;i <= maxn;i++)
    {
        for(int j = 0;j < a[i];j++)
        {
            cnt += j;
        }
    }
    cout<<cnt;
}
//箱排序 O(nn)