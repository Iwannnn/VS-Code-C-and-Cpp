#include <stdio.h>
int main(void){
    int n,x;
    while(~scanf("%d%d",&n,&x)){
        int a[n][n], i, j;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n;i++){
            for (j = i; j < n;j++){
                a[i][j] = a[i][j] * x;
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j < n-1;j++){
                printf("%d ", a[i][j]);
            }
            printf("%d\n", a[i][n - 1]);
        }
    }
}