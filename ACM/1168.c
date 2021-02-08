#include <stdio.h>
int countdigit(long long int number, int digit);
int main(void){
    int digit;
    long long int number;
    while(~scanf("%lld%d",&number,&digit)){
        int s=0;
        s = countdigit(number, digit);
        printf("%d\n", s);
    }
}
int countdigit(long long int number, int digit){
    int s = 0,t;
    if(number ==0&&digit==0)
        return 1;
    while(number>0){
        t = number % 10;
        if(t==digit){
            s++;
        }
        if(number>0){
            number /= 10;
        }
    }
    return s;
}