#include <stdio.h>
struct aaa{
    char name[100];
    int a;
}temp;
int main(){
    int t;
    while(~scanf("%d", &t)){
    while(t--){
        int n,i,j,maxi;
        struct aaa a[50];
        scanf("%d", &n);
        for (i = 0; i <n;i++)
            scanf("%s %d", a[i].name, &a[i].a);
        for (i = 0; i < n - 1;i++){
            maxi = i;
            for (j = i + 1; j < n;j++)
                if(a[j].a>a[maxi].a)
                    maxi = j;
            temp = a[i];
            a[i] = a[maxi];
            a[maxi] = temp;
        }
        for (i = 0; i < n;i++)
            printf("%s\n", a[i].name);
    }
    }
}