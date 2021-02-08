#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    while(~scanf("%d", &n)){
    int a[100111],max,s=1,i;
    for (i = 1; i <= n;i++)
        scanf("%d", &a[i]);
    max = a[n];
    for (i = n-1; i >= 1;i--){
        if(a[i]>max){
            s++;
            max = a[i];
        }
    }
        printf("%d\n", s);
    }
}