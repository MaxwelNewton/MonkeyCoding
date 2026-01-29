#include <bits/stdc++.h>
using namespace std;

long long f(long long n)
{
    long long sum = 0;
    while(n)
    {
        sum += n % 10 * (n % 10);
        n /= 10;
    }
    return sum;
}

int main()
{
    long long k,a,b;
    cin>>k>>a>>b;
    long long cnt = 0;
    for(int i = 1;i <= 9 * 9 * 18;i++)
    {
        long long n = k * i;
        if(n < a || n > b)
            continue;
        if(i != f(n))
            continue;
        cnt++;
    }
    cout<<cnt;
}