#include <stdio.h>
void swap(int *a, int *b, int *c);
int main(int argc,char *argv[]){
    int a, b, c;
    while(~scanf("%d%d%d",&a,&b,&c)){
        swap(&a, &b, &c);
        printf("%d %d %d\n",a,b,c);
    }
}
void swap(int *a, int *b, int *c){
    int t;
    if(*a>*b){
        t = *a;
        *a = *b;
        *b = t;
    }
    if(*a>*c){
        t = *a;
        *a = *c;
        *c = t;
    }
    if(*b>*c){
        t = *b;
        *b = *c;
        *c = t;
    }
}