#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum = 0;
	int maxx = -5e8,minx = 5e8;
	int maxy = -5e8,miny = 5e8;
    for(int i = 1;i <= n;i++)
    {
        int x,y;
        cin>>x>>y;
        maxx = max(maxx,x + y);
        minx = min(minx,x + y);
        maxy = max(maxy,x - y);
        miny = min(miny,x - y);
    }
    cout<<max(abs(maxx - minx),abs(maxy - miny));
}