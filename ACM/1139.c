#include <stdio.h>
#include <string.h>
int main(void){
    char a[10];
    while(gets(a)!=NULL){
        printf("I am ");
        printf("%s,yes,I can!",a);
    }
}