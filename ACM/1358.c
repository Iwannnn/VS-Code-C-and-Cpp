#include <stdio.h>
int main(){
    int i,k=0,max=0,a;
    for (i = 1; i <= 1000;i++){
        scanf("%d", &a);
        if(a>max){
            max = a;
            k++;
        }
    }
    printf("%d", k);
}