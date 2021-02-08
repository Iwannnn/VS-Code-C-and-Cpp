#include <stdio.h>
#include <string.h>
int main(){
    int a, b, n;
    while(~scanf("%d%d%d",&a,&b,&n)){
        int m;
        if(n==1) m = a * 2 + b * 3 - 7 * a * b;
        else if(n==2) m = 5 * a + 9;
        else if(n==3) m = 7 * a - 4 * b;
        else if(n==4) m = a * b;
        else continue;
        printf("%d\n", m);
        if(m%2==0) printf("xia\n");
        else if(m%3==0) printf("han\n");
        else if(m%5==0) printf("tang\n");
        else if(m%7==0) printf("yuan\n");
        else printf("wei\n");
    }
}