#include <stdio.h>
int main(void){
    int i,a[100],tall,sum=0;
    for (i = 1; i <= 10;i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &tall);
    tall += 30;
    for (i = 1; i <= 10;i++){
        if (a[i] <= tall){
            sum++;
        }
    }
    printf("%d\n", sum);
}