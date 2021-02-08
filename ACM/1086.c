#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int sumx=0, sumy=0,i,x,y;
        scanf("%d%d", &x, &y);
        if(x!=y){
        for (i = 1; i < x;i++){
            if(x%i==0)
                sumx = sumx + i;
        }
        for (i = 1; i < y;i++){
            if(y%i==0)
                sumy = sumy + i;
        }
        if (sumy==x&&sumx==y)
            printf("YES\n");
        else
            printf("NO\n");
        }else{
            printf("NO\n");
        }    
    }
    system("pause");
    return 0;
}