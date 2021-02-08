#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d",&n)){
        int t,i,min;
        scanf("%d", &min);
        for (i = 2; i <= n;i++){
            scanf("%d", &t);
            if(t<min)
                min=t;
        }
        printf("%d\n", min);
    }
}