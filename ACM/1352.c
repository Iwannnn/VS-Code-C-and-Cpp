#include <stdio.h>
#include <string.h>
struct a{
    int l, w,flag;
};
int main(){
    int i,j,n,mini,sum=0,t,nexti;
    struct a p[1234],temp;
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        scanf("%d%d", &p[i].l, &p[i].w);
        p[i].flag = 1;
    }
    for (i = 1; i < n;i++){
        mini = i;
        for (j = i + 1; j <= n;j++)
            if (p[mini].l >= p[j].l)
                mini = j;
        temp = p[i];
        p[i] = p[mini];
        p[mini] = temp;
    }
    for (i = 1; i < n;i++){
        mini = i;
        for (j = i + 1; j <= n;j++)
            if (p[mini].l==p[j].l&&p[mini].w > p[j].w)
                mini = j;
        temp = p[i];
        p[i] = p[mini];
        p[mini] = temp;
    }
    for (t = 1; t <= n;){
        for (i = 1; i <= n;i++)
            if(p[i].flag==1){
                nexti = i;
                p[i].flag = 0;
                t++;
                sum++;
                break;
            }
        for (i = nexti; i <= n;i++){
            if(p[i].flag==1&&p[i].l>=p[nexti].l&&p[i].w>=p[nexti].w){
                p[i].flag = 0;
                t++;
                nexti = i;
            }
        }
    }
    printf("%d", sum);
}