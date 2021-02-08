#include <stdio.h>
#include <math.h>
int main()
{
    int m,n,a,b,c,max,min;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        m=a,n=b;
        if (a<b)
        {
            c=a;
            a=b;
            b=c;
        }
        while (b!=0)
        {
            c=a;
            a=b;
            b=c%b;
        }
        max=a;
        min=m*n/max;
        printf("%d %d\n",max,min);
    }
    return 0;
}