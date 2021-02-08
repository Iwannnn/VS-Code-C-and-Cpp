#include <stdio.h>
int main(){
    int n,a[55];
    a[1] = 1;
    a[2] = 1;
    for (int i = 3; i <= 50;i++)
        a[i] = a[i - 1] + a[i - 2];
    scanf("%d", &n);
    printf("%d\n", a[n]);
    return 0;
}
