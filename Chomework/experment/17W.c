#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d",&n)){
        long long int time[25][10]={0},i,j,k;
        time[1][1] = 1;
        time[1][2] = 1;
        time[1][3] = 1;
        time[1][4] = 1;
        time[1][5] = 1;
        for (i = 2; i <= n;i++)
            for (j = 0; j <= 5;j++)
                for (k = 0; k <= 5;k++)
                    if(k!=j)
                        time[i][j] += time[i - 1][k];
        printf("%lld\n", time[n][0]);
    }
}