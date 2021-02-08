#include <stdio.h>
int fun(int n, int m);
int main(void){
    int m,n;
    while (~scanf("%d%d",&n, &m)){
        int s;
        s= fun(n, m);
        printf("%d\n", s);
    }
}
int fun(int n, int m){
    int res=0,t;
    while(n>=m){
        t = n % m;
        res += n - t;
        n = n / m + t;
    }
    res += n;
    if(m-n==1){
        res++;
    }
    return res;
}