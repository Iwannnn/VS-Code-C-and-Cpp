#include <stdio.h>
int main(){
    int n, m, x, y;
    while(~scanf("%d%d%d%d",&n,&m,&x,&y)){
        int k,s=0,a[50][50]={0},i,j,b[50][50],ansi[30],ansj[30],ans=0;
        scanf("%d", &k);
        for (i = 1; i <= n;i++)
            for (j = 1; j <= m;j++)
                scanf("%d", &a[i][j]);
        for (i = 1; i <= n;i++)
            for (j = 1; j <= m;j++){
                if(a[i][j]==0||a[i][j]==1)
                    b[i][j] = 0;
                else if(a[i][j]==-1)
                    b[i][j] = -1;
            }
        a[x][y] = 1;
        if(b[x][y]==-1){
            printf("Die\n");
            continue;
        }

    }
}