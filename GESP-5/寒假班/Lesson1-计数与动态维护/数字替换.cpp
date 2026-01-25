#include <bits/stdc++.h>
using namespace std;

long long a[100001];

int main()
{
    int n;
    cin>>n;
    long long sum = 0;
    for(int i = 1;i <= n;i++)
    {
        int x;
        cin>>x;
        sum += x;
        a[x]++;
    }
    int q;
    cin>>q;
    for(int i = 1;i <= q;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x != y)
        {
            sum -= a[x] * x;
            sum += a[x] * y;
            a[y] += a[x];
            a[x] = 0;
        }
        cout<<sum<<endl;
    }
}
//for循环 O(n)