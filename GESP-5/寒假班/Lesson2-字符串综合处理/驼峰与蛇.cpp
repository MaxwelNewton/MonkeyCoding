#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int j = 0;j < s.size();j++)
    {
        if(s[j] == '_')
        {
            j++;
            cout<<char(s[j] - 32);
        }
        else if(s[j] <= 'Z' && s[j] >= 'A')
        {
            cout<<"_";
            cout<<char(s[j] + 32);
        }
        else
        {
            cout<<s[j];
        }
    }
    cout<<endl;
}