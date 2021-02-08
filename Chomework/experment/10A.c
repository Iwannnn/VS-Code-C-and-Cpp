#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[n][n],i,j,flag=1;
        for (i = 0; i < n;i++){
            for (j = 0; j < n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < n;i++){
            for (j = 0; j <= i-1;j++){
                if(a[i][j]!=0){
                    flag = 0;
                }
            }
        }
        if(flag){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}