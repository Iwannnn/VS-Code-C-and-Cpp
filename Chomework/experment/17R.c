#include <stdio.h>
struct state{
    int number,a,b;
    float sum;
    char name[30];
}temp;
int main(){
    int n;
    while(~scanf("%d",&n)){
        struct state a[123];
        int i, j, maxi;
        for (i = 1; i <= n;i++){
            scanf("%d%s%d%d", &a[i].number,a[i].name, &a[i].a, &a[i].b);
            a[i].sum = a[i].a * 0.8 + a[i].b * 0.2;
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
            printf("%d %s %.1f %d\n", a[i].number,a[i].name,a[i].sum,i);
    }
}