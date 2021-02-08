#include <stdio.h>
int main(){
    int i,j,n,m,s=0;
    scanf("%d%d",&n,&m);
    for (i=n;i<=m;i++){
        j=i;
        while(j>0){
            if(j%10==2)
                s++;
            j/=10;
        }
    }
    printf("%d\n",s);
    return 0;
}