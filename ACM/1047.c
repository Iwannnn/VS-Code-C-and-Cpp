#include <stdio.h>
int main()
{
    int n, sum=0, s=0, i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        s=s+i;
        sum=sum+s;
        i=i+1;
    }
    printf("%d",sum);
} 