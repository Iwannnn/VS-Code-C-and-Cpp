#include<stdio.h>
int main(){
int a[1001],n,k,x,count,i;
    while(~scanf("%d%d",&n,&k)){
        for(i=1;i<=n;i++)
            a[i]=i;
        count=n;
        x=0;
        for(i=0;count>1;i++){
            if(a[i%n+1]!=-1){
                x++;
            }
            if(x==k && a[i%n+1]!=-1){
                a[i%n+1]=-1;
                count--;
                x=0;
            }
        }
        for(i=1;i<=n;i++)
            if(a[i]!=-1)
                printf("%d\n",i);
    }
}