#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a[2],*p=&a[0];
    scanf("%d%d", &a[0], &a[1]);
    if(a[0]>a[1])
        *p = a[1];
    printf("%d\n", 2**p);
    system("pause");
    return 0;
}