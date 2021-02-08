#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int m,n,h,i,j,k,l;
    while(scanf("%d",&n)!=EOF)
    {
        l = 2 * n - 1;
        for (i = 1; i <= n; i++){
            m = 2* i - 1;
            j = i;
            k = 1;
            for (j = i; j <= (l-1) / 2;j++)
            {
                printf(" ");
            }
            for (k = 1; k <= m;k++)
            {
                printf("*");
            }
        printf("\n");
        }
        for (h = n-1; h >= 1; h--)
        {
            m = 2 * h - 1;
            j = h;
            k = 1;
            for (j = h; j <= (l-1) / 2;j++)
            {
                printf(" ");
            }
            for (k = 1; k <= m;k++)
            {
                printf("*");
            }
                printf("\n");
        }
    }
    return 0;
}