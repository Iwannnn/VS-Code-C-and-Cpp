#include <stdio.h>
#include <string.h>
int main(int agrc,char *argv[]){
    int n,f[1000],i,j,l=1;
    memset(f, 0, sizeof(f));
    f[1] = 2;
    scanf("%d", &n);
    for (i = 2; i <= n;i++){
        for (j = 1; j <= l;j++){
            f[j] *= 2;
        }
        f[1] += 2;
        if(f[l]>=10)l++;
        for(j=1;j<=l;j++){
            if(f[j]>=10){
                f[j] -= 10;
                f[j + 1]++;
            }    
        }
    }
    for (i = l; i >= 1;i--)
        printf("%d", f[i]);
    printf("\n");
    return 0;
}