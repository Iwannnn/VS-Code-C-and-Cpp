#include <stdio.h>
#include <math.h>
int main()
{
    int  a, b;
    scanf("%d",&a);
    if  (a>=10000 && a<100000)
    {
        if(a/10000==a%10 && a/1000%10==a/10%10)
            printf("Yes");
        else
            printf("No");
    }
    else
        printf("No");
    return 0;
}
