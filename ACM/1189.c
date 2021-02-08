#include <stdlib.h>
#include <stdio.h>
int main(void){
    int m, n, k,ans;
    scanf("%d%d%d", &m, &n, &k);
    if(k==1){
        ans = m + n;
    }else if(k==2){
        ans = m - n;
    }else if(k==3){
        ans = m * n;
    }else {
        ans = m / n;
    }
    printf("%d\n", ans);
    system("pause");
}