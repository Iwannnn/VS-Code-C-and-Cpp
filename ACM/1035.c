#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main(){
    int a, b, c, d, n;
    for(n=1000;n<10000;n++){
        a=n/1000;
        b=n%1000/100;
        c=n%100/10;
        d=n%10;
        if(a==b && c==d && sqrt(n)==(int) sqrt(n))
           printf("%d\n",n);
    }
    system("pause");
    return 0;
}