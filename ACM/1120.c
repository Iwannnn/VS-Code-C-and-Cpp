#include <stdio.h>
int main(void){
    int m;
    while(~scanf("%d",&m)){
        int a[m][m],i,j,zhu=0,fu=0;
        for (i = 0; i < m;i++){
            for (j = 0; j < m;j++){
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < m;i++){
            zhu = zhu + a[i][i];
            fu = fu + a[i][m - 1 - i];
        }
        printf("%d %d\n", zhu, fu);
    }
}