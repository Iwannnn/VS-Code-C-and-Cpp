#include <stdio.h>
struct stu{
    int time,money;
}temp;
int main(int argc,char **argv){
    int t,i,j,k,l;
    scanf("%d", &t);
    for (i = 1; i <= t;i++){
        scanf("%d", &k);
        struct stu s[k];
        for (j = 0; j < k;j++)
            scanf("%d%d", &s[j].time, &s[j].money);
        for (j = 0; j < k;j++){
            for (l = k - 1; l > j;l--){
                if(s[l].time<s[l-1].time){
                    temp = s[l];
                    s[l] = s[l - 1];
                    s[l - 1] = temp;
                }
            }
        }
        for (j = 0; j < k;j++)
            printf("%d\n", s[j].money);
    }
}