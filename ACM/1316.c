#include <stdio.h>
#include <string.h>
int main(){
    int i,m,n,a[30086],max=0;
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%d", &m);
        a[m]++;
        if(a[m]>max){
            max = a[m];
        }
    }
    for (i = 0; i < 30086;i++){
        if(a[i]==max)
            printf("%d  %d\n", i, max);
    }
}