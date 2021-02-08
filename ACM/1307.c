#include <stdio.h>
int main(){
    int n, m,t;
    scanf("%d", &t);
    while (t--){
        scanf("%d%d",&n,&m);
        int i;
        for (i = m; i >= 1;i--){
            if(n%i==0&&m%i==0){
                break;
            }
        }
        printf("%d\n", i);
    }
}