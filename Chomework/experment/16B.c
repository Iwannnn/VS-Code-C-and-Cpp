#include <stdio.h>
int main(){
    int t;
    while(~scanf("%d",&t)){
        while(t--){
        int i, j, qiana[5], qianb[5], houa[2], houb[2],t1=0,t2=0;
        for (i = 0; i<5;i++)
            scanf("%d", &qiana[i]);
        for (i = 0; i < 2;i++)
            scanf("%d", &houa[i]);
        for (i = 0; i<5;i++)
            scanf("%d", &qianb[i]);
        for (i = 0; i < 2;i++)
            scanf("%d", &houb[i]);
        for (i = 0; i < 5;i++)
            for (j = 0; j < 5;j++)
                if(qianb[i]==qiana[j])
                    t1++;
        for (i = 0; i < 2;i++)
            for (j = 0; j < 2;j++)
                if(houb[i]==houa[j])
                    t2++;
        if(t1==5&&t2==2)
            printf("yes\n");
        else
            printf("no\n");
    }
    }
}