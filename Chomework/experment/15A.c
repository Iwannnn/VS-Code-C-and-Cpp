#include<stdio.h>
#include<math.h> 
int jc(int n){
    int s=1;
    int i;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
int C(int n,int r){
    int result;
    result=jc(n)/(jc(r)*jc(n-r));
    return result;
}
int main(){
    int t;
    int n,r;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&n,&r);
        printf("%d\n",C(n,r));
    }
}