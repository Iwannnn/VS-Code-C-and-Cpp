#include <stdio.h>
int main(){
    int m, n;
    while(~scanf("%d%d",&m,&n)){
        int i,j,a[1050][400]={0},max=399;
        a[1][1] = 1;
        a[2][1] = 1;
        n = n - m + 1;
        for (i = 3; i <= n;i++){
            for (j = 1; j <= max-1;j++){
                a[i][j] = a[i - 1][j] + a[i - 2][j];
            }
            for (j = 1; j <= max-1;j++){
                if(a[i][j]>=10){
                    a[i][j + 1] += a[i][j] / 10;
                    a[i][j] %= 10;
                }
            }
        }
        for (i = max; i >= 1;i--){
            if(a[n][i]==0)
                max--;
            else
                break;
        }
        for (i = max; i >= 1;i--)
            printf("%d", a[n][i]);
        printf("\n");
    }
}