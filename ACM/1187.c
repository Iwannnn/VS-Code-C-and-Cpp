#include <stdio.h>
#include <stdlib.h>
int main(void){
    int n;
    while(~scanf("%d", &n)){
    int a[10001],max,s=1,*p=a;
    for (p = a; p < a + n; p++){
        scanf("%d", p);
        if(p==a){
            max = *p;
        }else if(*p>max){
            max = *p;
            s++;
        }
    }
    printf("%d\n", s);
    }
}