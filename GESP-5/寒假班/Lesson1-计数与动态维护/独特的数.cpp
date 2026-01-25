#include <bits/stdc++.h>
using namespace std;

bool isSpecial(int n)
{
    bool f[10] = {};
    while(n)
    {
        if(f[n % 10] == 0)
        {
            f[n % 10] = 1;
        }
        else
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    int a = 0;
    while(n)
    {
        a++;
        if(isSpecial(a))
        {
            n--;
        }
    }
    cout<<a;
}
//箱排序 O(nn)