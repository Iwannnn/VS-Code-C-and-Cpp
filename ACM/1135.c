#include <stdio.h>
int main(void){
    int n, m;
    float d;
    while(~scanf("%d%d%f",&n,&m,&d)){
        int i, j,a[n][m];
        float k = 0,l;
        for (i = 0; i < n;i++){
            for (j = 0; j < m;j++){
                scanf("%d", &a[i][j]);
                if(a[i][j]!=0)
                    k++;
            }
        }
        l = k / (n * m);
        printf("%d %d\n", n, m);
        if(l<d){
            for (i = 0; i < n;i++){
                for (j = 0; j < m;j++){
                if(a[i][j]!=0)
                    printf("%d %d %d\n", i, j, a[i][j]);
                }
            }
        }else{
            for (i = 0; i < n;i++){
                for (j = 0; j < m-1;j++){
                    printf("%d ", a[i][j]);
                }
                printf("%d\n", a[i][m - 1]);
            }
        }    
    }
}