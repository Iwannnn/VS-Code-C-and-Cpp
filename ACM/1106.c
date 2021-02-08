#include <stdio.h>
#include <math.h>
int main (void) {
    int N,R;
    while(~scanf("%d%d",&N,&R)){
        int a[1000],s=0,n;
        n = abs(N);
        while (n!=0){
            a[s]=n%R;
            n /= R;
            s++;
        }
        if(N<0)
            printf("-");
        for (int i = s - 1; i > 0; i--){
            if(a[i]>=10)
                printf("%c",(char)((a[i]-10)+'A'));
            else
                printf("%d", a[i]);
        }
        if(a[0]>=10)
            printf("%c\n",(char)((a[0]-10)+'A'));
        else
            printf("%d\n", a[0]);
    }
}