#include <stdio.h>
struct state{
    int money,preson,sum;
    char name[30];
}temp;
int main(){
    int n;
    while(~scanf("%d",&n)){
        struct state a[123];
        int i, j, maxi;
        for (i = 1; i <= n;i++){
            scanf("%s%d%d", a[i].name, &a[i].preson, &a[i].money);
            a[i].sum = a[i].preson * a[i].money;
        }
        for (i = 1; i < n;i++){
            maxi = i;
            for (j = i + 1; j <= n;j++)
                if(a[j].sum>a[maxi].sum)
                    maxi = j;
            temp = a[maxi];
            a[maxi] = a[i];
            a[i] = temp;
        }
        for (i = 1; i <= n;i++)
            printf("%s\n", a[i].name);
    }
}