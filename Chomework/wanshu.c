#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[ ]){
    int a,b,sum=0,i;
    sscanf(argv[1], "%d", &a);
    sscanf(argv[2], "%d", &b);
    while(a<=b){
        i = 1;
        sum = 0;
        while(i<a){
            if(a%i==0){
                sum += i;
            }
            i++;
        }
        if(sum==a)
            printf("%d ", a);
        a++;
    }
    return 0;
}