#include <stdio.h>
long long int fun(int n);
int main(void){
    int n,s;
    while(~scanf("%d", &n)){
        long long int sum = 0;
        for (int i = 1; i <= n;i++){
            s = fun(i);
            sum += s;
        }
        printf("%lld\n", sum);
    }
}
long long int fun(int n){
    long long int s=1;
    for (int i = 2; i <= n;i++){
        s *= i;
    }
    return s;
}