#include <stdio.h>
#include <string.h>
int main()
{
    int n,a[1500],t,m,flag;
    while(scanf("%d",&n) != EOF){
    memset(a, 0, sizeof(a));
    m = 0;
    flag = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &t);
        if(a[t]==0)
            m++;
        a[t] = 1;
    }
    printf("%d\n", m);
    for(int i = 0;i < 1500;i++){
        if(a[i]!=0){
            if(flag==0){
                printf("%d",i);
                flag = 1;
            }else{
                printf(" %d", i);
            }
        }
    }
    printf("\n");
    }
    return 0;
}