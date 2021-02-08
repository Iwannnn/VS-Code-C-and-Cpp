#include <stdio.h>
int main()
{
    int n,i,j,k;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            for (j = 1; j <= n - i;j++)
                printf(" ");
            for (j = i,k=1;k<=2*i-1;k++)
                printf("%d", j);
            printf("\n");
        }
        for(i=n-1;i>=1;i--)
        {
            for (j = 1; j <= n - i; j++)
                printf(" ");
            for (j = i,k=1;k<=2*i-1;k++)
                printf("%d", j);
            printf("\n");      
        }
    }
}    
