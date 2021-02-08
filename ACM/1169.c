#include <stdio.h>
int maxi(int a, int b);
int main(void){
    int x, y, z;
    while(~scanf("%d%d%d",&x,&y,&z)){
        int max;
        max = maxi(maxi(x, y), z);
        printf("%d\n", max);
    }
}
int maxi(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}