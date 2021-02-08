#include <stdio.h>
int main()
{
    int a, b, c, max;
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if (a>=b && a>=c)
        max=a;
    if (b>=a && b>=c)
        max=b;
    if (c>=b && c>=a)
        max=c;
    printf("%d",max);
    return 0;

}
