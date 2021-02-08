#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    long long int n,i,max;
    scanf("%lld", &n);
    for (i = 2; i<n;i++){
        if(n%i==0){
            max = n / i;
            printf("%lld", max);
            return 0;
        }
    }
}