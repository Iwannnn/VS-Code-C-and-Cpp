#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[n][n],i,j;
        for (i = 0; i < n;i++){
            a[i][0] = 1;
        }
        a[1][1] = 1;
        for (i = 2; i < n; i++){
            for (j = 1; j <= i; j++)
                if(j!=i)
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
                else
                    a[i][j] = 1;
        }
        for (i = 0; i < n;i++){
            for (j = 0; j <= i;j++){
                if(j!=i)
                    printf("%d ", a[i][j]);
                else
                    printf("%d\n", a[i][j]);
            }
        }
        printf("\n");
    }
}