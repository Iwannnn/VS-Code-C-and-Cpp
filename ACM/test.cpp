#include <bits/stdc++.h>
using namespace std;
struct ry
{
    int v;
    double c;
};
stack<ry>vis;
int main()
{
    ios::sync_with_stdio(0);
    char p;
    int v0,v1,v2,n;
    double c0,c1,c2;
    cin>>v0>>c0>>n;
    v2=v0;
    c2=c0;
    for(int i=0;i<n;i++)
	{
        cin>>p;
        if(p=='P')
		{
            cin>>v1>>c1;
            vis.push({v1,c1});
            c0=(v0*c0+v1*c1)/(v0+v1);
            c0=c0;
            v0=v0+v1;
            printf("%d %.5lf\n",v0,c0);
        }
        else
		{
            if(vis.empty())
			{
                printf("%d %.5lf\n",v2,c2);
                continue;
            }
            ry tmp=vis.top();
            vis.pop();
            v1=tmp.v;
            c1=tmp.c;
            c0=(v0*c0-v1*c1)/(v0-v1);
            v0=v0-v1;
            printf("%d %.5lf\n",v0,c0);
        }
    }
    return 0;
}
