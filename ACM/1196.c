#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]){
    int n;
    while (~scanf("%d",&n)){
        int p[10000]={0}, q[10000]={0};
        int *a=p,*b=q,t=0;
        for (a = p; a < p + n; a++){
            scanf("%d", a);
            if(((*a)*(*a))%7!=1){
                *b = *a;
                b++;
                t++;
            }
        }
        if(t!=0){
        printf("%d", q[0]);
        for (b = q+1; b < q + t;b++)
            printf(" %d", *b);
        }
        printf("\n");
    }
}