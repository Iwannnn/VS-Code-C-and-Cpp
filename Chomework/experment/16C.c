#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d",&n)){
        int i, j;
        for (i=n; i >= 1;i--){
            for (j = i - 1; j >=1;j--)
                printf(" ");
            for (j = n; j >= i;j--)
                printf("%d", j);
            for (j = i + 1; j <= n;j++)
                printf("%d", j);
            printf("\n");
        }
        for (i = 2; i <= n;i++){
            for (j = i - 1; j >= 1;j--)
                printf(" ");
            for (j = n; j >= i;j--)
                printf("%d", j);
            for (j = i + 1; j <= n;j++)
                printf("%d", j);
            printf("\n");
        }
    }
}