#include <stdio.h>
int main(){
    int m, n;
    while(~scanf("%d%d",&m,&n)){
        int i,j,t=m+n-1;
        for (i = 1; i <= n;i++){
            for (j = 1; j <= t-m-i+1;j++)
                printf(" ");
            for (j = 1; j <= m + i - 1;j++)
                printf("*");
            printf("\n");
        }
        for (i = n-1; i >=1;i--){
            for (j = 1; j <= t-m-i+1;j++)
                printf(" ");
            for (j = 1; j <= m + i - 1;j++)
                printf("*");
            printf("\n"); 
        }
    }
}