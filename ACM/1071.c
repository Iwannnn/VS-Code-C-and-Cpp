#include <stdio.h>
#include <math.h>
int main()
{
    int s,a,b,c,d;
    while(scanf("%d",&s)!=EOF)
    {
        a=s/1000;
        b=s/100%10;
        c=s/10%10;
        d=s%10;
        if(a*a*a*a+b*b*b*b+c*c*c*c+d*d*d*d==s)
        printf("Yes\n");
        else
        printf("No\n");
        
    }
    return 0;
}