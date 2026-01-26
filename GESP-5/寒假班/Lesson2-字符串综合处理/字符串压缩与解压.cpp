#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;
    string s;
    getline(cin,s);
    getline(cin,s);
    for(int i = 0;i < s.size();i++)
    {
        if(c == 'C')
        {
            int cnt = 1;
            while(i != s.size() - 1 && s[i] == s[i + 1])
            {
                i++;
                cnt++;
            }
            if(cnt > 1)
            {
                cout<<cnt<<s[i];
            }
            else
            {
                cout<<s[i];
            }
        }
        else
        {
            int sum = 0;
            while(s[i] >= '0' && s[i] <= '9')
            {
                sum = sum * 10 + s[i] - '0';
                i++;
            }
            for(int j = 1;j <= sum;j++)
            {
                cout<<s[i];
            }
            if(sum == 0)
            {
                cout<<s[i];
            }
        }
    }
}