#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int flag;
    for(int i = 0;i < s.size();i++)
    {
        if(flag)
        {
            flag--;
            continue;
        }
        if(s[i] == 'i')
        {
            cout<<'1';
        }
        else if(s[i] == 't' && s[i + 1] == 'o')
        {
            cout<<'2';
            flag = 1;
        }
        else if(s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'r')
        {
            cout<<'4';
            flag = 2;
        }
        else if(s[i] == 'o')
        {
            cout<<'0';
        }
        else
        {
            cout<<s[i];
        }
    }
}