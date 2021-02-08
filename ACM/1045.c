#include <stdio.h>
int main()
{
    int a[100], N, i=0, n, max, min;
    scanf("%d",&N);
    for (i=0;i<=N-1;i++){
        scanf("%d",&n);
        a[i]=n;
    }
    i=0;
    max=a[0];
    min=a[0];
    for (i=0;i<=N-1;i++){
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    printf("max=%d, min=%d",max,min);
}    
