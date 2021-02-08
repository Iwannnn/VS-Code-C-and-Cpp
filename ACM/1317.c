#include <stdio.h>
#include <string.h>
int main(){
    int n,m,k,j=0,a[10086],i;
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    for (i = 1; i <= n;i++){
        scanf("%d", &m);
        a[m] = 1;
    }
    for (i = 1; i <10086;i++){
        if(a[i]==1)
            j++;
        if(j==k){
            printf("%d\n", i);
            return 0;
        }
    }
    printf("NO RESULT\n");
    return 0;
}