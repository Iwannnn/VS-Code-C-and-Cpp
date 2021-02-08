#include <stdio.h>
void fun(int a,int *t);
int main(int argc, char *argv[]){
    int n,a,t=1;
    scanf("%d", &n);
    a = n / 2;
    fun(a,&t);
    printf("%d",t);
}
void fun(int a,int *t){
    if (a != 0){
        for (int i = 1; i <= a;i++){
            (*t)++;
            int b=i/2;
            fun(b,t);
        }
    }
}
