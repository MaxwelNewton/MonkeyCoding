#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    cin>>l>>r;
    for(int i = r;i >= 1;i--)
    {
        if(r / i - (l - 1) / i >= 2)
        {
            cout<<i;
            break;
        }
    }
}