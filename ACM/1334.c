#include <stdio.h>
int jieti(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 2;
    else
        return jieti(n - 1) + jieti(n - 2);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", jieti(n));
    return 0;
}