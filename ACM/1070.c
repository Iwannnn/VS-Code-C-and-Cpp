#include <stdio.h>
#include <math.h>
int main()
{
    int s,a,b,c;
    while(scanf("%d",&s)!=EOF)
    {
        a=s/100;
        b=s/10%10;
        c=s%10;
        if(a*a*a+b*b*b+c*c*c==s)
        printf("Yes\n");
        else
        printf("No\n");
        
    }
    return 0;
}