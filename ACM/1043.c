#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if (n%2==0)
    printf("%d",-n/2);
    if (n%2!=0)
    printf("%d",(n+1)/2);
}