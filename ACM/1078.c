#include<stdio.h>
int main()
{
    int n,s[n],sum;
    while(scanf("%d",&n)!=EOF)
    {
        sum = 1;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&s[i]);
        }
        for(int j = 0; j<n; j++)
        {
            if((s[j]%2)!=0)
                {
                sum = sum*s[j];
                } else continue;
        }
        printf("%d\n",sum);
    }
    return 0;
}