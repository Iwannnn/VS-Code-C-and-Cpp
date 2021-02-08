#include<stdio.h>
int main(){
    int n,m,i;
    while(~scanf("%d%d",&n,&m)){
        int a[100],b[100],t,op,x,y;
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        scanf("%d",&b[i]);;
        scanf("%d",&t);
        while(t--){
            scanf("%d",&op);
            if(op==1){
                scanf("%d%d",&x,&y);
                a[x-1]=y;
            }if(op==2){
                scanf("%d",&x);
                printf("%d\n",a[b[x-1]-1]);
            }
        }
    }
    return 0;
}