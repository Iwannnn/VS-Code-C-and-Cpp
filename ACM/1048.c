#include <stdio.h>
int main()
{   
    int p=1, q=1, o;
    float m=0, n=0;
    scanf("%d",&o);
    for (p=1;p<=2*o-1;)
    {
        if (q%2!=0)
        m=m+p;
        else
        m=m-p;
        n=n+1/m;
        p=p+2;
        q=q+1;
    }
    printf("%.2f",n);   
} 