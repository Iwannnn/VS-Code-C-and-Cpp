#include <stdio.h>
int h(int n,char from, char help, char des){
    int t=0;
    if(n==1){
        t++;
    }else{
        t = h(n - 1, from, des, help);
        t++;
        t = h(n - 1, help, des, help);
    }
    return t;
}
int main(){
    int n,t;
    while(~scanf("%d",&n)){
        t = h(n, 'a', 'b', 'c');
        printf("%d\n", t);
    }
}