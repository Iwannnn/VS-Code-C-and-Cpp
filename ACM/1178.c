#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,s;
    char x[1000000],m[100];
    int count=0,sum=0;
    for(i=0; i<n; i++){
        scanf("%s",&x[i]);
        if(x[i]=='C'){
            count++;
            scanf("%s",m);
        }else{
            scanf("%d",&s);
            sum+=s;
        }
    }
    printf("%d %d",count,sum/(n-count));
    return 0;
}