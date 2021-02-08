#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int a,b,c,min;
        scanf("%d%d", &a, &b);
        if(a<b){
            c = a;
            a = b;
            b = c;
        }
        while(b!=0){
            c = a;
            a = b;
            b = c % b;
        }
        min = a;
        printf("%d\n", min);
    }
}