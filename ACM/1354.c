#include <stdio.h>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int main(){
    int i,j,n,m,k,a[233],b[233],c[233],sum=0;
    scanf("%d%d%d", &n, &m, &k);
    for (i = 1; i <= k;i++)
        scanf("%d", &b[i]);
    for (i = 1; i <= n;i++)
        scanf("%d%d", &a[i], &c[i]);
    for (i = 1; i < n;i++){
        for (j = 1; j <= n-i;j++)
            if(a[j]<a[j+1]){
                swap(&a[j], &a[j + 1]);
                swap(&c[j], &c[j + 1]);
            }
    }
    for (i = 1; i <= n;i++){
        if(b[c[i]]!=0&&m>0){
            sum += a[i];
            b[c[i]]--;
            m--;
        }
    }
    printf("%d\n", sum);
}