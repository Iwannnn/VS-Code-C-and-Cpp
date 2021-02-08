#include <stdio.h>
int main()
{
    int t,n;
    scanf ("%d",&t);
    while(t--){
        int m;
        scanf("%d", &n);
        if (n%2==1)
            m= (n + 1) * (2 * n * n + 3 * n - 1) / 8;
        else
            m= n * (n + 2) * (2 * n + 1) / 8;
        printf("%d\n", m);
    }
    
    return 0;
}