#include <bits/stdc++.h>
using namespace std;

int a[27];

int main()
{
    int n;
    cin>>n;
    int cnt = 0;
    for(int i = 1;i <= n - 1;i++)
    {
        char c,x;
        cin >> c >> x;
        a[c - 'a' + 1]++;
        if(a[x - 'A' + 1] >= 1)
        {
            a[x - 'A' + 1]--;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt;
}
//箱排序 O(n)