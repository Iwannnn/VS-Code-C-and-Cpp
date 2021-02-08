#include <stdio.h>
int main(){
    int a, n;
    while(~scanf("%d%d",&a,&n)){
        int item=a,sum=a,i;
        for (i = 2; i <= n;i++){
            item *= 10;
            item += a;
            sum += item;
        }
        printf("%d\n", sum);
    }
}