#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 1 && b == 1){
        printf("tie");
    }else if(a==1&&b==2){
        printf("win");
    }else if(a==1&&b==3){
        printf("lose");
    }else if(a==2&&b==1){
        printf("lose");
    }else if(a==2&&b==2){
        printf("tie");
    }else if(a==2&&b==3){
        printf("win");
    }else if(a==3&&b==1){
        printf("win");
    }else if(a==3&&b==2){
        printf("lose");
    }else if(a==3&&b==3){
        printf("tie");
    }
    system("pause");
} 