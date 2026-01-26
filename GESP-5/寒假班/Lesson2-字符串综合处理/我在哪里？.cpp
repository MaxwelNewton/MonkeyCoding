#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin>>n>>s;
    for(int i = 1;i <= n;i++)
    {
        bool flag = 1;
        for(int j = 0;j <= n - i;j++)
        {
            for(int k = 0;k <= n - i;k++)
            {
                if(j == k)
                {
                    continue;
                }
                if(s.substr(k,i) == s.substr(j,i))
                {
                    flag = 0;
                }
            }
        }
        if(flag)
        {
            cout<<i;
            return 0;
        }
    }
}