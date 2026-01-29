#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,r;
    cin>>n>>l>>r;
    if(r >= n * 2 && l / n != r / n)
        cout<<n - 1;
    else
        cout<<r % n;
}