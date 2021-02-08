#include <stdio.h>
int main (void) {
    int n;
    while(~scanf("%d",&n)) {
        int a[n],temp,m,s=-1;
        for (int i = 0; i < n;i++) {
            scanf("%d", &a[i]);
        }
        scanf("%d", &m);
        for (int i = n - 1; i >0; i--) {
            for (int j = n-1; j > n-1-i;j--) {
                if((a[j])>(a[j-1])) {
                    temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if(a[i]==m) {
                s = i;
                break;
                }    
        }    
        if(s!=-1) {
            printf("%d\n", s + 1);
        } else {
            printf("\n");
        }    
    }
}