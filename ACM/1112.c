#include <stdio.h>
#include <math.h>
int main (void) {
    int n;
    while(~scanf("%d",&n)) {
        if(n==0)
            break;
        int a[n],b[n],temp,s=0;
        for (int i = 0; i < n;i++) {
        scanf("%d", &a[i]);
        }
        for (int i = n - 1; i >0; i--) {
            for (int j = n-1; j > n-1-i;j--) {
                if(a[j]>a[j-1]) {
                    temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i]%2==0) {
                b[s] = a[i];
                s++;
            }
        }
        if(s!=0) {
        for (int i = 0; i < s - 1; i++)
        {
            printf("%d ", b[i]);
        }
        printf("%d\n", b[s-1]);
        } else {
            printf("\n");
        }
    }    
}