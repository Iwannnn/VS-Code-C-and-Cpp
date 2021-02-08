#include <stdio.h>
struct state{
    int year,month;
    char name[30],sex[30];
}temp;
int main(){
    int n;
    while(~scanf("%d",&n)){
        struct state a[123];
        int i, j, maxi;
        for (i = 1; i <= n;i++){
            scanf("%s%s%d%d", a[i].name,a[i].sex, &a[i].year, &a[i].month);
        }
        for (i = 1; i < n;i++){
            maxi = i;
            for (j = i + 1; j <= n;j++){
                if(a[j].year>a[maxi].year)
                    maxi = j;
                else 
                    if(a[j].year==a[maxi].year&&a[j].month>a[maxi].month)
                    maxi = j;
                    }
            temp = a[maxi];
            a[maxi] = a[i];
            a[i] = temp;
        }
        for (i = 1; i <= n;i++)
            printf("%s %s %.d %d\n", a[i].name,a[i].sex,a[i].year,a[i].month);
    }
}