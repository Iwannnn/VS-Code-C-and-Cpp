#include <stdio.h>
int main(){
    int n,i,j,num[15][15]={0},maxi;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            scanf("%d",&num[i][j]);
    for (i = 2;i<=n;i++)
        for (j=1;j<=i;j++)
                num[i][j]+=num[i-1][num[i-1][j-1]>num[i-1][j]?j-1:j];
    for (i=2;i<=n;i++)
        maxi=num[n][maxi]<num[n][i]?i:maxi;
    printf("%d", num[n][maxi]);
}