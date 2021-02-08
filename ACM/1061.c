#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    int m,min=100000;
    scanf("%d",&m);
    for(int j=1;j<=m;j++)
    {
    int k;
    scanf("%d",&k);
    if(k<min) min=k; 
    }
    printf("%d\n",min);
    }     
    return 0;
}