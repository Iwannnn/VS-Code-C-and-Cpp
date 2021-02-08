#include <stdio.h>
int main(){
    int t;
    while(~scanf("%d",&t)){
    while(t--){
        int n,i,a,b,suma=0,sumb=0;
        scanf("%d", &n);
        for (i = 0; i < n;i++){
            scanf("%d", &a);
            suma += a;
        }
        for (i = 0; i < n;i++){
            scanf("%d", &b);
            sumb += b;
        }
        printf("%d %d\n", suma, sumb);
    }
    }
}