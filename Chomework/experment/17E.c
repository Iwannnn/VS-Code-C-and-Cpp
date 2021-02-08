#include <stdio.h>
int main(){
    int i,a,sum1=0,sum2=0;
    for (i = 1; i <= 3;i++){
        scanf("%d", &a);
        sum1 += a;
    }
    for (i = 4; i <= 6;i++){
        scanf("%d", &a);
        sum2 += a;
    }
    if(sum1-sum2>=10)
        printf("Trump Win\n");
    else if(sum1-sum2<=-10)
        printf("Hillary Win\n");
    else
        printf("Draw\n");
}