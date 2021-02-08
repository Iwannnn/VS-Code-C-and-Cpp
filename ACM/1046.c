#include <stdio.h>
int main()
{
    int n, i=0;
    scanf("%d",&n);
    for(i=0;n!=1;i++)
    {
        if (n%2==0)
            n=n/2;
        else
            n=3*n+1;     
    }        
    printf("%d",i);
}    