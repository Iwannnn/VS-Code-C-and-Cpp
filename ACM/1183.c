#include <stdio.h>
int main(){
    int a[1000], *p,n;
    scanf("%d", &n);
    for (p = a; p < a + n; p++)
            scanf("%d", p);
    while(--p > a)
        printf("%d ",*p);
    printf("%d\n", *p);     
}