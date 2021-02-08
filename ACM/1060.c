#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { 
        int m,max=-100000;
        scanf("%d",&m);
        for(int j=1;j<=m;j++)
        {
            int k;
            scanf("%d",&k);
            if(k>max) max=k; 
        }
    printf("%d\n",max);
    }     
    return 0;
}