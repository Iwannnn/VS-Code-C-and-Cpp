#include <stdint.h>
#include <stdio.h>
int search(int list[], int n,int x){
    int i,index=-1;
    for (i = 0; i < n;i++)
        if(list[i]==x)
            index = i;
    return index;
}
int main(){
    int a[10], x;
    while(~scanf("%d",&a[0])){
        int i,index;
        for (i = 1; i <= 9;i++)
            scanf("%d", &a[i]);
        scanf("%d", &x);
        index=search(a, 10, x);
        if(index==-1) printf("Not found\n");
        else printf("%d\n", index);
    }
}