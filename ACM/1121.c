#include <stdio.h>
int main(void){
    int m;
    while(~scanf("%d",&m)){
        int a[m][m],i,j,s=0,t;
        for (i = 0; i < m;i++){
            for (j = 0; j < m;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < m;i++){
            for (j = 0; j < i; j++){
                if(a[i][j]==0){
                    s++;
                }
            }
        }
        t = m * m - (m + 1) * m / 2;
        if(s==t){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}