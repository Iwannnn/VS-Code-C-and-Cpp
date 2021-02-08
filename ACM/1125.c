#include <stdio.h>
#include <math.h>
int main(void){
    int m, n;
    while(~scanf("%d%d",&m,&n)){
        int a[m][n],b[n][m],c[m][m], i, j,k;
        for (i = 0; i < m;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j < m;j++){
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < m;i++){
            for (j = 0; j < m; j++){
                c[i][j] = 0;
                for (k = 0; k < n;k++)
                    c[i][j] += a[i][k]*b[k][j];
            }
        }
        for (i = 0; i < m;i++){
            for (j = 0; j < m-1;j++){
                    printf("%d ", c[i][j]);
            }
            printf("%d\n",c[i][j]);
        }
    }
}