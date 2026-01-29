#include <bits/stdc++.h>
using namespace std;

int t[100001];
int cnt[100001];

int main()
{
    int n;
    cin>>n;
    int a;
    int b = 0;
    for(int i = 1;i <= n;i++)
    {
        a = 0;
        cin>>t[i];
        cnt[t[i]]++;
        int sum = 0;
		for(int j = 1;j <= 600;j++)
		{
			sum += cnt[j];
			if(sum >= i / 2 && a == 0)
			{
				a = j;
			}
			if(sum >= i / 2 + 1)
			{
				b = j;
				break;
			}
		}
        if(i % 2 != 0)
        {
            cout<<b;
        }
        else
        {
            cout<<(a + b) / 2;
        }
        cout<<endl;
    }
}