#include<stdio.h>
int year(int n,int m,int k) {
    int y;
    if(n==1)
        y=k;
    else  
        y=year(n-1,m,k)+m;
    return y;
}
int main()
{
    int n,m,k;
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
        printf("%d\n",year(n,m,k));
    return 0;
}