#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int maxx = -1e6,minx = 1e6,maxy = -1e6,miny = 1e6;
    for(int i = 1;i <= n;i++)
    {
        int x,y;
        cin>>x>>y;
        maxx = max(maxx,x + y);
        minx = min(minx,x + y);
        maxy = max(maxy,x - y);
        miny = min(miny,x - y);
    }
    cout<<max(maxx - minx,maxy - miny);
}