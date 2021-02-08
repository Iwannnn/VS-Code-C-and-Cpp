#include <stdio.h>
int reverse(int n){
    if(n!=0){
        printf("%d", n % 10);
        reverse(n / 10);
    }else{
        printf("\n");
        return 0;
    }    
}
int main(){
    int n;
    while(~scanf("%d", &n))
    reverse(n);
}