#include<stdio.h> 
void itoa(long i,char *s){ 
    if(i==0) return;
    *s = '0'+i%10;
    itoa(i/10,s-1);
};
void main(){
    long n;
    char str[7]="";
    scanf("%ld",&n);
    itoa(n,str+5);
    printf("%s",str);
}