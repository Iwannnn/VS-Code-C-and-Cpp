#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d",&n)){
        int i,j,money[1234],bigtonow[1234]={0},smalltonow[1234]={0},max,startmoney,maxnum,index;
        for (i = 1; i <= n;i++)
            scanf("%d", &money[i]);
        for (i = 1; i <= n;i++)
            for (j = i + 1; j <= n; j++)
                if(money[i]<=money[j]&&i!=j)
                    bigtonow[i]++;
        for (i = 1; i <= n;i++)
            for (j = i + 1; j <= n;j++)
                if(money[i]>money[j])
                    smalltonow[i]++;
        startmoney = money[1];
        for (i = 1; i <= n; i++)
            printf("money=%d bigtonow=%d smalltonow=%d\n", money[i], bigtonow[i],smalltonow[i]);
        if(bigtonow[1]==0){
            printf("1\n");
            continue;
        }
        for (i = 2; i <= n; i++)
            if (money[i] >= startmoney)
                break;
        index = i;
        maxnum = bigtonow[index];
        for (i = index+1; i <= n; i++){
            if (bigtonow[i] > maxnum && money[i] >= startmoney)
                maxnum = bigtonow[i];
        }
        max = maxnum + 2;
        printf("%d\n", max);
    }
}