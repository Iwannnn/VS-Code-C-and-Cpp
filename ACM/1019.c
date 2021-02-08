#include <stdio.h>
int main()
{
    int m, n, z;
    scanf("%d %d",&m,&n);
    z=m;
    m=n;
    n=z;
    printf("%d %d",m,n);
    return 0;
}
