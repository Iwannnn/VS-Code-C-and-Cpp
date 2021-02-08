#include <stdio.h>
#include <string.h>
int main(){
    char n[10], m[1234];
    scanf("%s%s", n, m);
    int l1=strlen(n),l2=strlen(m),a[l1],b[l2],c[1234]={0},i,j;
    for(i=0,j=l1-1;i<l1;i++,j--)
        a[i]=n[j]-'0';
    for(i=0,j=l2-1;i<l2;i++,j--)
        b[i]=m[j]-'0';
    
}