#include <stdio.h>
int hanio(int n,char from[],char help[],char to[]){
    int t=0;
    if(n==1)
        t = 2;
    else
        t += 2*hanio(n - 1, from, to, help)+2+hanio(n-1,help,to,from);
    return t;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        int m;
        char a[] = "from",b[]="help",c[]="to";
        m = hanio(n, a, b, c);
        printf("%d\n", m);
    }
}