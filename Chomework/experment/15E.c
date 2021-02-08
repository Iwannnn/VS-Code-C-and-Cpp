#include<stdio.h>
int gcd(int x,int y){
    int t=1;
    while(t!=0){
    t=x%y;
    x=y;
    y=t;
    }
    return x;
}
int lcm(int s[],int n){
    int num,i;
    for(i=0;i<n-1;i++){
        num=gcd(s[i],s[i+1]);
        s[i+1]=s[i]/num*s[i+1]/num*num;
    }
    return s[n-1];
}
int main(){
    int t,n,m,i;
    scanf("%d%d",&n,&m);
    int s[n];
    for(i=0;i<n;i++)
        scanf("%d",&s[i]);
    t=lcm(s,n);
    printf("%d", t - m);
}