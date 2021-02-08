#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[n][n], b[n][n],c[n][n], i, j;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
                b[j][i] = a[i][j];
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j < n-1;j++){
                c[i][j] = a[i][j] + b[i][j];
                printf("%d ", c[i][j]);
            }
            printf("%d\n", a[i][n - 1] + b[i][n - 1]);
        }
    }
}