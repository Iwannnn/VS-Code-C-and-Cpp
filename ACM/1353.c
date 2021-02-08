#include <stdio.h>
int main(){
    int n,k,w[12345],t,i,j,m,max1,max2;
    scanf("%d%d", &n, &k);
    t = n;
    for (i = 1; i <= n;i++)
        scanf("%d", &w[i]);
    for (i = n; i >= 2;i--){
        max1 = 1;
        max2 = 2;
        for (j = 1; j <= n;j++)
            if(w[j]>w[max1])
                max1 = j;
        for (j = 1; j <= n;j++)
            if(w[j]>w[max2]&&j!=max1)
                max2 = j;
        w[max2] = (w[max1] + w[max2]) / k;
        w[max1] = 0;
        for (m = 1; m <= n;m++)
            printf("%d ", w[m]);
        printf("\n");
    }
    for (i = 1; i <= n;i++)
        if(w[i]>0){
            printf("%d\n", w[i]);
            return 0;
        }
}