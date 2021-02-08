#include "stdio.h"
void main()
{
    int n,i,s;
    int sum(int i);
    scanf("%d",&n);
    for(s=0,i=1;i<=n;i++)
    s=s+sum(i);
    printf("%d\n",s);
}
int sum(int i)
{
    int j,a;
    for(a=1,j=1;j<=i;j++)
    a=a*j;
    return a;
}