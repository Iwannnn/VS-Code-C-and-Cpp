#include <stdio.h>
#include <math.h>
int main (void) {
    int n;
    while(~scanf("%d",&n)) {
        if(n==0)
            break;
        int a[n],temp;
        for (int i = 0; i < n;i++) {
        scanf("%d", &a[i]);
        }
        for (int i = n - 1; i >0; i--) {
            for (int j = n-1; j > n-1-i;j--) {
                if(abs(a[j])>abs(a[j-1])) {
                    temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            printf("%d ", a[i]);
        }
        printf("%d\n", a[n-1]);
    }    
}