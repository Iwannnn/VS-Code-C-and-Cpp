#include <stdio.h>
void move(int *a, int n, int m);
int main(int argc,char *argv[]){
    int n, m;
    while(~scanf("%d%d",&n,&m)){
        int i,a[n],*p=a;
        for (i = 0; i < n;i++){
            scanf("%d", p + i);
        }
        move(p, n, m);
        printf("%d", *p);
        for (i = 1; i < n;i++){
            printf(" %d", *(p + i));
        }
        printf("\n");
    }
}
void move(int *a, int n, int m){
    int i,t;
    t = *(a + n - 1);
    for (i = n-1; i >=0;i--){
        *(a + i + m) = *(a + i);
    }
    for (i = 0; i < m;i++){
        *(a + i) = *(a + n + i);
    }
}