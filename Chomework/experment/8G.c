#include <stdio.h>
void sort(int *p, int n);
int main(int argc,char *argv[]){
    int n;
    while (~scanf("%d",&n)){
        int i,a[n],*p=a;
        for (i = 0; i < n;i++){
            scanf("%d", p + i);
        }
        sort(p, n);
        printf("%d", *p);
        for (i = 1; i < n;i++){
            printf(" %d", *(p + i));
        }
        printf("\n");
    }
}
void sort(int *p, int n){
    int i,j,t;
    for (i = 0; i < n;i++){
        for (j = n - 1; j >i;j--){
            if(*(p+j)<*(p+j-1)){
                t = *(p + j);
                *(p + j) = *(p + j - 1);
                *(p + j - 1) = t;
            }
        }
    }
}