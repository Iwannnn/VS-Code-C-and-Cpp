#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int a, b, c, x, y,flag=0;
        scanf("%d%d%d", &a, &b, &c);
        for (x = 1;x<=1000;x++)
            for (y = 1; y <= 1000;y++)
                if((a*x+b*y)==c){
                    printf("%d %d\n", x, y);
                    flag = 1;
                }
        if(flag==0)
            printf("No\n");
    }
}