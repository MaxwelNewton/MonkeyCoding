#include <bits/stdc++.h>
using namespace std;

int a[1000001];
int t[10001];

int main()
{
    int n,m;
    cin>>n;
    for(int i = 1;i <= n;i++)
    {
        int x;
        scanf("%d",&x);
        t[i] = t[i - 1] + x;
        for(int j = t[i - 1] + 1;j <= t[i];j++)
        {
            a[j] = i;
        }
    }
    cin>>m;
    for(int i = 1;i <= m;i++)
    {
        int x;
        scanf("%d",&x);
        printf("%d ",a[x]);
    }
}
//双重循环 O(nn)