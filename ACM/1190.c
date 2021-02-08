#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n,a[1000],i,j,temp;
    scanf("%d", &n);
    for (i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1;i++){
        for (j = 0; j < n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("%d", a[0]);
    for (i = 1; i < n;i++){
        printf(" %d", a[i]);
    }
    printf("\n");
    system("pause");
}