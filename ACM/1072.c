#include <stdio.h>
#include <math.h>
int main()
{
    int s,a,b,c,d,e;
    while(scanf("%d",&s)!=EOF)
    {
        a=s/10000;
        b=s/1000%10;
        c=s/100%10;
        d=s/10%10;
        e=s%10;
        if(a*a*a*a*a+b*b*b*b*b+c*c*c*c*c+d*d*d*d*d+e*e*e*e*e==s)
        printf("Yes\n");
        else
        printf("No\n");
        
    }
    return 0;
}