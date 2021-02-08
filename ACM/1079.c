#include<stdio.h>
int main()
{
    int m,n,t;
    long x,y;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        x = 0;
        y = 0;
        if(n>m)
        {
            t = n;
            n = m;
            m = t;
        }
        while(n<=m)
        {
            if(n%2==0)
                x = x + n * n;
            else
                y = y + n * n * n;
            n++;
        }
        printf("%ld %ld", x, y);
    }
    return 0;
}