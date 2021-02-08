#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i = 1;
        for (i = 1; i <= n;i++)
        {
            int j = 1;
            for (j = 1; j <= i;j++)
            {
                if(i==j)
                printf("%d*%d=%d", j, i, j * i);
                else
                printf("%d*%d=%-3d", j, i, j * i);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}