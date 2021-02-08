#include <stdio.h>
int find(int *a, int l, int x){
    int r = -1;
    int i;
    for(i = 0; i < l; i ++)
        if(a[i] == x){
            r = i;
            break;
        }
    return r;
} 
int main(){
    int a[10];
    int x;
    while(scanf("%d",&a[0])!=EOF){
        int i;
        for(i = 1; i< 10; i ++)
            scanf("%d",&a[i]);
        scanf("%d",&x);
        i = find(a,10,x);
        if(i == -1) printf("Not found\n");
        else printf("%d\n", i);
    }
    return 0;
}