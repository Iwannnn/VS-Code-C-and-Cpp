#include <stdio.h>
#include <math.h>
int sushu(int a){
    int i,flag = 1;
    if(a==1)
        return 0;
    for (i = 2; i <= sqrt(a);i++)
        if(a%i==0){
            flag = 0;
            break;
        }
    return flag;
}
int main(){
    int ys, ye, ms, me;
    while(~scanf("%d%d%d%d",&ys,&ms,&ye,&me)){
        int i,j,sum=0;
        if(ys==ye){
            for (i = ms; i <= me;i++)
                if(sushu(ys*100+i)==1)
                    sum++;
        }else{
            for (i = ms; i <= 12;i++)
                if (sushu(ys*100+i) == 1)
                    sum++;
            for (i = 1; i <= me;i++)
                if (sushu(ye*100+i) == 1)
                    sum++;
            for (i = ys + 1; i <= ye - 1; i++)
                for (j = 1; j <= 12; j++)
                    if (sushu(i*100+j) == 1)
                        sum++;
        }
        printf("%d\n", sum);
    }
}