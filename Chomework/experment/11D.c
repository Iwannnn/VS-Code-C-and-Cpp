#include <stdio.h>
long f(int n);
void main(){
    printf("%ld\n",f(30));
}
long f(int n){
    if(n==1||n==2) return 1;
    else return f(n-1)+f(n-2);
}