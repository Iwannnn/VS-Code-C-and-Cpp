#include <stdio.h>
int eight(int n){
    if(n>=8){
        return 10*eight(n/8)+n%8;
    }else{
        return n;
    }
}
int main(){
    int n;
    while(~scanf("%d",&n))
        printf("%d\n",eight(n));
}