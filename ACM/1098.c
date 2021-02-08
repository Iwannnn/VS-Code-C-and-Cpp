#include <stdio.h>
int main() {
    int n;
    while (~scanf("%d", &n)) {
        int a[n],k=0,b[n];
        float s=0,ave;
        for (int i = 0; i < n;i++) {
            scanf("%d", &a[i]);
            s = s + a[i];
        }
        ave = s / n;
        for (int i = 0; i < n;i++) {
            if(a[i]<ave){
                b[k] = a[i];
                k = k + 1;
            }
        }
        if(k>0) {
            for (int i = 0; i < k - 1;i++) {
                printf("%d ", b[i]);
            }
            printf("%d\n", b[k - 1]);
        } else if(k==0) { 
            printf("\n");
        }
    }
    return 0;
}