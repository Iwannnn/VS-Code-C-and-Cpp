#include <stdio.h>
#include <math.h>
int main()
{
    int n, m;
    while (scanf("%d%d",&n,&m)!=EOF)
    {
        float i,sum = n, s = n;
        for (i = 2; i <= m;i++)
        {
            s = sqrt(s);
            sum = sum + s;
        }
        printf("%.2f\n", sum);
    }
    return 0;
}