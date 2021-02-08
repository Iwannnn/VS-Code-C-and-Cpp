#include <stdio.h>
int main(){
    int i, n, t,a,min;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &min);
        for (i = 1; i < n;i++){
            scanf("%d", &a);
            if(a<min)
            min = a;
        }
        printf("%d\n", min);
    }
}