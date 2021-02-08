#include <stdio.h>
#include <stdlib.h>
int search(int *p, int n, int x);
int main(){
    int p[10];
    while(scanf("%d",p)){
        int x,index,i;
        for (i=1; i < 10;i++)
            scanf("%d", p+i);
        scanf("%d", &x);
        index=search(p, 10, x);
        if(index==-1)
            printf("Not found\n");
        else
            printf("%d\n",index);
    }
}
int search(int *p, int n, int x){
    int i,t=-1;
    for (i = 0; i < n;i++){
        if(p[i]==x){
            t = i;
            break;
        }
    }
    return t;
}