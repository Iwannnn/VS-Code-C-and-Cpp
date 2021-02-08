#include <stdio.h>
int main(void) {
    int n,x,i;
    while(~scanf("%d%d",&x,&n)) {
        int a[n],k=-1;
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++) {       
            if (x==a[i]) {
                k = i;
            }
        }
        if (k==-1) {
            printf("Not Found\n");
        } else {
            printf("%d\n", k);
        }
    }       
    return 0;
}