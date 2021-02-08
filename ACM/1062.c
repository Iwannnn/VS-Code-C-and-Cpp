#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        float m,sum=0;
        scanf("%f",&m);
        for(int j=1;j<=m;j++)
        {
            int k;
            scanf("%d",&k);
            sum=sum+k;
        }
    printf("%.2f\n",sum/m);
    }
    return 0;
}