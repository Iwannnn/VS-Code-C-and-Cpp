#include <stdio.h>
int main(){
int n,m,ball[40][40];
    scanf("%d %d",&n,&m);
    ball[0][1]=1;  
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            ball[i][j]=ball[i-1][j==1?n:j-1] + ball[i-1][j==n?1:j+1];
    printf("%d\n",ball[m][1]); 
    return 0;
}