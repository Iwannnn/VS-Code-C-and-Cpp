#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    const int x[9]={0,-2,-2,-1,-1,1,1,2,2};
    const int y[9]={0,1,-1,-2,2,-2,2,-1,1};
    int xb,yb,xc,yc,i,j;
    scanf("%d%d%d%d", &xb, &yb, &xc, &yc);
    long long int a[30][30],qi[30][30];
    memset(a, 0, sizeof(a));
    memset(qi, 0, sizeof(qi));
    for (i = 0; i <= 8;i++)
        if(xc+x[i]>=0&&yc+y[i]>=0)
            a[xc + x[i]][yc + y[i]] = 1;  //马可以走到
    qi[1][1] = 1;
    for(int i=1;i<=xb;i++)
    	if(a[i][0]==0) qi[i][0]=1;  //第几行
    	else break;
    for(int j=1;j<=yb;j++) 
     	if(a[0][j]==0) qi[0][j]=1;    //第几列
     	else break;
    for (i = 1; i <= xb;i++){
        for (j = 1; j <= yb;j++){
            if(a[i][j]==0)
                qi[i][j] = qi[i - 1][j] + qi[i][j - 1];
            else
                qi[i][j] = 0;
        }
    }
    printf("%lld\n", qi[xb][yb]);
    system("pause");
}