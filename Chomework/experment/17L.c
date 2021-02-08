#include <stdio.h>
#include <math.h>
int sushu(int n){
    int i, flag = 1;
    if(n==1)
        flag = 0;
    for (i = 2; i <= sqrt(n);i++)
        if(n%i==0){
            flag = 0;
            break;
        }
    return flag;
}
int main(){
    int t,i,a,b;
    scanf("%d", &t);
    while(t--){
        int sum = 0;
        scanf("%d%d", &a,&b);
        for (i = a; i <= b; i++)
            sum += sushu(i);
        printf("%d\n", sum);
    }
}