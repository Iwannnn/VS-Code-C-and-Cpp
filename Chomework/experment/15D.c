#include <stdio.h>
struct a{
    char na[30],name[30];
    double s;
};
int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n,i,j;
        scanf("%d",&n);
        struct a c[50], temp;
        for (i = 0; i < n;i++)
            scanf("%s", c[i].na);
        for (i = 0; i < n;i++)
            scanf("%s", c[i].name);
        for (i = 0; i < n;i++)
            scanf("%lf", &c[i].s);
        for (i = 0; i < n;i++){
            for (j = n - 1; j > i;j--){
                if(c[j].s>c[j-1].s){
                    temp=c[j];
                    c[j] = c[j - 1];
                    c[j - 1] = temp;
                }
            }
        }
        for (i = 0; i < n;i++)
            printf("%s %s %.2f\n", c[i].na, c[i].name, c[i].s);
    }
}