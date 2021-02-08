#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        float s,sum=0;
        for(int i=1;i<=n;i++)
        {
            sum=sum+1.0/((1+i)*i/2);
        }
        printf("%.4f\n",sum);
    }
    return 0;
}