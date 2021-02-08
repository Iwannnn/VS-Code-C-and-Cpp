#include <stdio.h>
#include <math.h>
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n, flag = 0,ans;
        int x,y=1;
        scanf("%d", &n);
        while(y<=10000){
            x = (int)sqrt(n * y * y);
            if(x*x-n*y*y==1){
                ans = y;
                flag = 1;
                break;
            }
            y++;
        }
        if(flag==1)
            printf("%d\n", ans);
        else
            printf("No\n");
    }
}