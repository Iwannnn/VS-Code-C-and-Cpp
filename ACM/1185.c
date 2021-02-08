#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[]){
    int n, m, k;
    while(scanf("%d%d%d", &n, &m, &k)){
    int a[n][m],(*p)[m],x,y,z,flag=1;
    memset(a, 0, sizeof(a));
    p = a;
    for (int i = 1; i <= k;i++){
        scanf("%d%d%d", &x, &y, &z);
        *(*(p + x-1) + y-1) = z;
    }
    for (int j = 0; j < m;j++){
        for (int i = 0; i < n;i++){
            if(*(*(p+i)+j)&&flag){
                printf("%d",*(*(p+i)+j));
                flag = 0;
            }else if(*(*(p+i)+j)){
                printf(" %d",*(*(p+i)+j));
            }
        }
    }
    printf("\n");
    }
    return 0;
}