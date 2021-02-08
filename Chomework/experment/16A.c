#include <stdio.h>
int main(){
    int t;
    while(~scanf("%d",&t)){
        int i,j,temp,fen[4],ren[10086]={0};
        fen[1] = 3;
        fen[2] = 1;
        fen[3] = 0;
        for (i = 1; i <= t;i++){
            for (j = 1; j <= 5;j++){
                scanf("%d", &temp);
                ren[i] += fen[temp];
            }
        }
        for (i = 1; i <= t;i++)
            printf("%d\n", ren[i]);
    }
}