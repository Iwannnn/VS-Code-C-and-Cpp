#include <stdio.h>
int main()
{
    int a[11], i=1;
    double sum=0;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
    for (i=1;i<=10;i++)
         sum=sum+a[i];    
    printf("ave=%.1f",sum/10);
}    
