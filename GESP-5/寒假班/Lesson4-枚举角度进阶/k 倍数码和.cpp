#include <bits/stdc++.h>
using namespace std;

int s(long long n)
{
    int sum = 0;
    while(n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    long long a,b,k;
    cin>>a>>b>>K;
    int cnt = 0;
    for(int i = 1;i <= 9 * 18;i++)
    {
        long long n = i * k;
        if(a <= n && n <= b && i == s(n))
        {
            cnt++;
        }
    }
    cout<<cnt;
}