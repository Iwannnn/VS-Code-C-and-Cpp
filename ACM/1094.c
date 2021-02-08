#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    while(~scanf("%d",&n)) {
        int i=0,a[n],m,k=-1;
        while(i<n) {
            scanf("%d", &a[i]);
            i++;
        }
        scanf("%d", &m);
        for (i = 0; i < n;i++) {
            if(a[i]==m) {
                k = i;
                break;
            }
        }
        if (k==-1)
            printf("No\n");
        else
            printf("%d\n", k);
    }
}